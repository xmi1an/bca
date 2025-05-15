/* 51. Write a c program to display the two Matrix on screen and perform the addition of two Matrix and print on screen. */

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[2][2], b[2][2], d[2][2], i, j;

    // Input Matrix A
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter Value for Matrix A : ");
            scanf("%d", &a[i][j]);
        }
    }
    // Input Matrix B
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter Value for Matrix B : ");
            scanf("%d", &b[i][j]);
        }
    }

    // Display Matrix A
    printf("\n\n\n Matrix A \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }

    // Display Matrix B
    printf("\n\n\n Matrix B \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%3d ", b[i][j]);
        }
        printf("\n");
    }

    // Addition of Two Matrix
    printf("\n\n Addition Of Two Matrix \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            d[i][j] = a[i][j] + b[i][j];
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }
}