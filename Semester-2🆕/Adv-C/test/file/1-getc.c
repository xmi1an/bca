#include <stdio.h>
void main()
{
  FILE *fp;
  int ch;

  fp = fopen("1-getc.txt", "r");

  if (fp == NULL)
    printf("File is not exist\n");
  else
  {
    while ((ch = getc(fp)) != EOF)
      printf("%c", ch);
  }
  fclose(fp);
}
