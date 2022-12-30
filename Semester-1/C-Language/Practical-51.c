/* 51. Write a c program to display the two matrix on screen and perform the addition of two matrix and print on screen. */

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[3][3], b[3][3], d[3][3], r, c;

    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("Enter Value for Matrix A : ");
            scanf("%d", &a[r][c]);
        }
    }

    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("Enter Value for Matrix B : ");
            scanf("%d", &b[r][c]);
        }
    }

    printf("\n\n\n MATRIX A \n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%3d", a[r][c]);
        }
        printf("\n");
    }

    printf("\n\n\n MATRIX B \n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%3d ", b[r][c]);
        }
        printf("\n");
    }

    printf("\n\n ADDISION OF TWO MATRIX \n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            d[r][c] = a[r][c] + b[r][c];
            printf("%d ", d[r][c]);
        }
        printf("\n");
    }
}