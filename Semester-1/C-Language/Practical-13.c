/*
13. Write a C program to find the maximum number from given three numbers.
*/

#include <stdio.h>
// #include <conio.h>
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

    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf(" Max : %d", n1);
        }
        else
        {
            printf(" Max : %d", n3);
        }
    }
    else
    {
        if (n2 > n3)
        {
            printf(" Max : %d", n2);
        }
        else
        {
            printf(" Max : %d", n3);
        }
    }
}
