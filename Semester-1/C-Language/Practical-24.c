/* 24. Write a C program to print accepted no and its reverse number. */

#include <stdio.h>
#include <conio.h>
void main()
{
    int n, ldigit, rev = 0;

    printf("Enter No : ");
    scanf("%d", &n);

    while (n != 0)
    {
        ldigit = n % 10;
        rev = rev * 10 + ldigit;
        n = n / 10;
    }

    printf("Reverse No : %d\n", rev);
}