#include <stdio.h>
void main()
{
  FILE *fp;
  char ch;
  fp = fopen("2-putc.txt", "w+");
  if (fp == NULL)
    printf("File not opened");

  while (ch = getchar())
    fclose(fp);
}
