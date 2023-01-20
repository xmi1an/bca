/*
47. Write a C program to find maximum & minimum value from the given array.
 */
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5], max, min, i, j;

    for (i = 0; i < 5; i++)
    {
        printf("Enter Element : ");
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for (i = 1; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("Max : %d\n", max);
    printf("Min : %d\n", min);
}
