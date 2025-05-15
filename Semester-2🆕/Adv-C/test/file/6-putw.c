#include <stdio.h>
int main()
{
  FILE *fp;
  int i;
  fp = fopen("num.txt", "w");
  for (i = 1; i <= 10; i++)
  {
    putw(i, fp);
  }
  fclose(fp);
  fp = fopen("num.txt", "r");
  printf("file content is");
  for (i = 1; i <= 10; i++)
  {
    i = getw(fp);
    printf("%d", i);
    printf("");
  }
  fclose(fp);
  return 0;
}
