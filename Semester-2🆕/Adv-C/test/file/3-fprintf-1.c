#include <stdio.h>

int main()
{
  FILE *fp;
  char name[20] = "Milan";
  int age;
  float height;

  // Open the file for writing
  fp = fopen("example.txt", "w");

  // Write data to the file
  fprintf(fp, "Hello %s", name);

  fclose(fp);

  return 0;
}
