#include <stdio.h>
void main()
{
  FILE *fp;
  int ch;
  fp = fopen("2-putc.txt", "w+");
  if (fp == NULL)
    printf("File not opened");
  putc('a', fp);
  fclose(fp);
}
