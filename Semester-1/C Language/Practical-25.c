/*  25. Write a C program to find whether the accepted number is palindrome or not. */
#include <stdio.h>
#include <conio.h>
void main()
{
    int temp, n, digit, rev = 0;
    // clrscr();
    printf("Enter No : ");
    scanf("%d", &n);

    temp = n;

    while (n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if (temp == rev)
    {
        printf("%d is Pelindrom number\n", temp);
    }
    else
    {
        printf("%d is not Pelindrom number\n", temp);
    }
}