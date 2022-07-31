/*
11. Write a C program to enter days and convert into years, month and reminder days.
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int d, y, m, rd;
    // clrscr();
    printf("Enter Days:");
    scanf("%d", &d);

    y = d / 365;
    m = (d - (365 * y)) / 30;
    rd = (d - (365 * y) - (m * 30));

    printf("Year : %d \n", y);
    printf("Month : %d \n", m);
    printf("Reminder Day : %d \n", rd);
}
