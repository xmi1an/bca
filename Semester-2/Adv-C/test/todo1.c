#include <stdio.h>
struct person
{
  char name[20];
  int age;
  float height;
};

void main()
{
  struct person p;
  printf("Size of struct person: %lu bytes\n", sizeof(struct person));
  printf("Size of variable p: %lu bytes ", sizeof(p));
}
