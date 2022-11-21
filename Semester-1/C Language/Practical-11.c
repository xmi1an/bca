/*
11. Write a C program to enter days and convert into years, month and reminder days.
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int days, year, mon, rd;

    clrscr();

    printf("Enter Days:");
    scanf("%d", &days);

    year = days / 365;

    printf("Year : %d \n", year);
    printf("Month : %d \n", mon);
}