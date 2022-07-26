#include <stdio.h>

void main()
{
    int a = 15;
    int b;
    b = (a++) + (a++);
    a = (b++) + (b++);
    printf("a= %d \nb = %d", a, b);
}
