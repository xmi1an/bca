/*  3. Write a c program for sorting using bubble sort method. */

#include <stdio.h>
#include <conio.h>

#define size 5

void main()
{
    int i, j, temp;
    int arr[size] = {18, 30, 15, 70, 12};

    printf("\nUnsorted Array : \n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf(" \nSorted array is: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    getch();
}