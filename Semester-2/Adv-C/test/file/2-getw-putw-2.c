#include <stdio.h>

void main()
{
  FILE *fp;
  int i = 34;
  fp = fopen("test.txt", "wb");

  putw(i, fp);

  fclose(fp);

  fp = fopen("test.txt", "r");

  printf("%d", getc(fp));

  fclose(fp);
}
