#include <stdio.h>
int main()
{
  FILE *fp;
  char name[20];
  int age;
  float height;
  fp = fopen("fprintf.txt", "r");
  fscanf(fp, "Name: %s\n Age: %d\n Height: %f", name, &age, &height);
  printf("Name: %s\nAge: %d\nHeight: %f\n", name, age, height);
  fclose(fp);
  return 0;
}
