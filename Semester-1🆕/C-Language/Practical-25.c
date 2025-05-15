/*  25. Write a C program to find whether the accepted number is palindrome or not. */
#include <stdio.h>
#include <conio.h>
void main()
{
    int temp, n, rem, rev = 0;
    // clrscr();
    printf("Enter No : ");
    scanf("%d", &n);

    temp = n;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
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