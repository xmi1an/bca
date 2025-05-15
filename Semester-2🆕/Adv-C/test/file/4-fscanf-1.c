#include <stdio.h>
int main()
{
  FILE *fp;
  char data[20];
  int age;
  fp = fopen("read.txt", "r");
  if (fp == NULL)
  {
    printf("File not opened");
  }
  // read full string with fscanf with space
  fscanf(fp, "Name: %s Age: %d", data, &age);

  printf("Name is : %s \n", data);
  printf("Age is : %d", age);

  fclose(fp);
  return 0;
}
