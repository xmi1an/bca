#include <stdio.h>

int main()
{
  FILE *fp;

  fp = fopen("example.txt", "r");
  if (fp == NULL)
  {
    printf("Error: could not open file\n");
    return 1;
  }
  putc('A', fp);

  if (ferror(fp))
  {
    printf("Error: an error occurred during file operation\n");
    return 1;
  }

  fclose(fp);
}
