#include <stdio.h>
int main()
{
  FILE *fp;
  int ch;

  fp = fopen("example.txt", "r");
  if (fp == NULL)
  {
    printf("Error: could not open file\n");
    return 1;
  }

  while (!feof(fp))
  {
    ch = getc(fp);
    putchar(ch);
  }

  fclose(fp);

  return 0;
}
