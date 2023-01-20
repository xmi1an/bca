/* Pr - 3 - write a C program to find the area of circle using the formula Area = PI * r * r. */

#include <stdio.h>
#include <conio.h>

void main()
{
    float pi = 3.14;
    float area;
    int r;
    printf("\n");

    printf("Enter the value of r : ");
    scanf("%d", &r);

    area = pi * r * r;

    printf("Area : %.2f", area);

    getch();
}