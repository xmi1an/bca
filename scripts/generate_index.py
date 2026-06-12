#!/usr/bin/env python3
"""Generate index.json — the content manifest consumed by the BCA Notes app.

The folder structure of this repository is effectively the app's database
schema. This script turns it into an explicit, versioned contract
(index.json) so the app no longer needs to fetch and parse the entire git
tree at runtime (which is slow, rate-limited, and silently truncated for
large repositories).

Usage:
    python3 scripts/generate_index.py            # write index.json
    python3 scripts/generate_index.py --check    # validate only, write nothing

The script FAILS LOUDLY (non-zero exit) when it finds PDFs in folders it
cannot map to a semester, so broken content never ships silently.
"""
from __future__ import annotations

import json
import sys
import urllib.parse
from pathlib import Path

REPO_OWNER = "xmi1an"
REPO_NAME = "bca"
BRANCH = "master"
RAW_BASE = (
    "https://raw.githubusercontent.com/" + REPO_OWNER + "/" + REPO_NAME + "/" + BRANCH + "/"
)

NEW_EMOJI = "\U0001F195"  # 🆕 — part of several top-level folder names

# Top-level folder name -> (semester_id, course_id).
# Folder names must match the repository's top-level folders EXACTLY,
# including the trailing 🆕 character where present.
SEMESTER_DIR_MAP = {
    f"Semester-1{NEW_EMOJI}": ("bca_1", "bca"),
    f"Semester-2{NEW_EMOJI}": ("bca_2", "bca"),
    f"Semester-3{NEW_EMOJI}": ("bca_3", "bca"),
    f"Semester-4{NEW_EMOJI}": ("bca_4", "bca"),
    f"Semester-5{NEW_EMOJI}": ("bca_5", "bca"),
    "Semester-6": ("bca_6", "bca"),
}

# Top-level entries that never contain study material.
IGNORED_TOP_LEVEL = {".git", ".github", "scripts"}

PAPER_KEYWORDS = ("paper", "exam")


def clean_dir_name(name: str) -> str:
    """Human-friendly display name for a directory."""
    return name.replace(NEW_EMOJI, "").replace("-", " ").replace("_", " ").strip()


def infer_category(path: str) -> str:
    lower = path.lower()
    return "paper" if any(k in lower for k in PAPER_KEYWORDS) else "note"


def build_raw_url(path: str) -> str:
    encoded = "/".join(urllib.parse.quote(seg) for seg in path.split("/"))
    return RAW_BASE + encoded


def collect_documents(root: Path) -> tuple[list[dict], list[str]]:
    documents: list[dict] = []
    problems: list[str] = []

    pdf_paths = sorted(
        p for p in root.rglob("*") if p.is_file() and p.suffix.lower() == ".pdf"
    )

    for pdf_path in pdf_paths:
        rel = pdf_path.relative_to(root).as_posix()
        parts = rel.split("/")

        if parts[0] in IGNORED_TOP_LEVEL:
            continue
        if len(parts) < 2:
            problems.append(f"PDF at repository root is not part of any semester: {rel}")
            continue

        mapping = SEMESTER_DIR_MAP.get(parts[0])
        if mapping is None:
            problems.append(
                f"Unmapped top-level folder {parts[0]!r} (file: {rel}). "
                "Add it to SEMESTER_DIR_MAP in scripts/generate_index.py."
            )
            continue
        semester_id, course_id = mapping

        if len(parts) >= 3:
            subject_name = clean_dir_name(parts[1])
            folder_path = "/".join(clean_dir_name(p) for p in parts[2:-1]) or None
        else:
            subject_name = "General"
            folder_path = None

        title = parts[-1]
        if title.lower().endswith(".pdf"):
            title = title[: -len(".pdf")]

        documents.append(
            {
                "id": rel,
                "title": title,
                "file_path": rel,
                "semester_id": semester_id,
                "subject_name": subject_name,
                "folder_path": folder_path,
                "category": infer_category(rel),
                "download_url": build_raw_url(rel),
                "course_id": course_id,
            }
        )

    return documents, problems


def main() -> int:
    check_only = "--check" in sys.argv
    root = Path(__file__).resolve().parent.parent

    documents, problems = collect_documents(root)

    if problems:
        print("Manifest generation found problems:", file=sys.stderr)
        for p in problems:
            print(f"  - {p}", file=sys.stderr)
        return 1

    if not documents:
        print("No PDF documents found — refusing to write an empty manifest.", file=sys.stderr)
        return 1

    manifest = {
        "schema_version": 1,
        "document_count": len(documents),
        "documents": documents,
    }

    if check_only:
        print(f"OK: {len(documents)} documents validated.")
        return 0

    out_path = root / "index.json"
    out_path.write_text(
        json.dumps(manifest, ensure_ascii=False, indent=1) + "\n",
        encoding="utf-8",
    )
    print(f"Wrote {out_path} with {len(documents)} documents.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
