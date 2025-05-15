/* 28. Write a C program to convert decimal numbers into equivalent hexadecimal number.  */

#include <stdio.h>
#include <conio.h>

void main()
{
    int b[20], i = 0, n, j;
    clrscr();
    printf("\n Enter Decimal number : ");
    scanf("%d", &n);

    while (n > 0)
    {
        b[i] = n % 16;
        n = n / 16;
        i++;
    }

    printf("\n Hexadecimal number :");
    for (j = i - 1; j >= 0; j--)
    {
        switch (b[j])
        {
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        default:
            printf("%d", b[j]);
        }
    }
}