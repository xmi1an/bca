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

  printf("Current file position: %ld\n", ftell(fp));

  ch = fgetc(fp);

  printf("Current file position: %ld\n", ftell(fp));

  fclose(fp);
}
