/* 52. Write a c program to display the two matrix on screen and perform the multiplication of two matrix and print on screen. */

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[2][2], b[2][2], d[2][2], r, c, k;
    printf("Matrix A : \n");
    for (r = 0; r < 2; r++)
    {
        for (c = 0; c < 2; c++)
        {
            printf("Enter Value : ");
            scanf("%d", &a[r][c]);
        }
    }
    printf("\nMatrix B : \n");
    for (r = 0; r < 2; r++)
    {
        for (c = 0; c < 2; c++)
        {
            printf("Enter Value : ");
            scanf("%d", &b[r][c]);
        }
    }
    printf("\nMatrix Multiplication : \n");
    for (r = 0; r < 2; r++)
    {
        for (c = 0; c < 2; c++)
        {
            d[r][c] = 0;
            for (k = 0; k < 2; k++)
            {
                d[r][c] = d[r][c] + (a[r][k] * b[k][c]);
            }
        }
    }
    printf("\nMatrix A : \n");
    for (r = 0; r < 2; r++)
    {
        for (c = 0; c < 2; c++)
        {
            printf("%3d", a[r][c]);
        }
        printf("\n");
    }

    printf("\nMatrix B : \n");
    for (r = 0; r < 2; r++)
    {
        for (c = 0; c < 2; c++)
        {
            printf("%3d", b[r][c]);
        }
        printf("\n");
    }

    printf("\nMatrix C : \n");
    for (r = 0; r < 2; r++)
    {
        for (c = 0; c < 2; c++)
        {
            printf("%3d  ", d[r][c]);
        }
        printf("\n");
    }
    getch();
}
