#include <stdio.h>
union person
{
    char name[20];
    int age;
    float height;
};
void main()
{
    union person p;
    printf("Size of struct person: %lu bytes\n", sizeof(union person));
    printf("Size of variable p: %lu bytes\n", sizeof(p));
}
