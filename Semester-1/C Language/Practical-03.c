/* Pr - 3 - write a C program to find the area of circle using the formula Area = PI * r * r. */

#include <stdio.h>
#include <conio.h>

void main()
{
    float pi = 3.14;
    int r = 5;
    float area;

    printf("\n");

    printf("Enter the value of r : ");
    scanf("%d", &r);

    area = pi * r * r;

    printf("Area : %.1f", area);

    getch();
}