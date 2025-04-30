#include <stdio.h>

int main()
{
  FILE *fp;
  int i;

  fp = fopen("example.txt", "w+");
  for (i = 1; i <= 10; i++)
  {
    putw(i, fp);
  }

  fclose(fp);
}
