/*
5. Write a C program to find the area and volume of sphere. Formulas are Area =
4*PI*R*R Volume = 4/3*PI*R*R*R.
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    float pi = 3.14;
    float area, vol;
    int r;
    // clrscr();

    printf("\nENTER THE VALUE OF r : ");
    scanf("%d", &r);
    area = 4 * pi * r * r;
    vol = 4 / 3 * pi * r * r * r;
    printf("\nAREA : %f", area);
    printf("\nVOLUME : %f", vol);
    getch();
}