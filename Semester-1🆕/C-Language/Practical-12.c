/* 12. Write a C program to find out the largest value from given three numbers using conditional Operator  */

#include <stdio.h>
#include <conio.h>

void main()
{
    int n1, n2, n3;
    // clrscr();

    printf("\n Enter n1 : ");
    scanf("%d", &n1);

    printf("\n Enter n2 : ");
    scanf("%d", &n2);

    printf("\n Enter n3 : ");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("\n n1 is largest");
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("\n n2 is largest");
    }
    else
    {
        printf("\n n3 is largest");
    }
}