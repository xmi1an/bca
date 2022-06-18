/*  3. Write a c program for sorting using bubble sort method. */

#include <stdio.h>

void main()
{
    int i, j, temp;
    int a[5] = {18, 30, 15, 70, 12};

    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
            /* if the next element is smaller than
                the current one then swap them. */
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    }

    printf("Sorted array is: ");
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
}