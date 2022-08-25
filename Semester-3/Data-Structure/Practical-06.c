/*  6. Write a c program for sorting using insertion sort. */

#include <stdio.h>
#include <conio.h>

#define SIZE 5

void main()
{
    int arr[SIZE] = {12, 11, 13, 5, 6};

    int i, key, j;

    printf("Before Sort..\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    for (i = 1; i < SIZE; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    printf("\nAfter Sort..\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}