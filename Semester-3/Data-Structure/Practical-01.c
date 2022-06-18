/*  1. Write a c program for linear search which find an element in an unsorted list. */

#include <stdio.h>

void main()
{
    int arr[5] = {18, 30, 15, 70, 12};
    int item = 70, i, j = 0;

    for (i = 0; i < 5; i++) // Display the array
    {
        printf("%d \n", arr[i]);
    }

    printf("\nElement to be searched = %d", item);
    while (j < 5) // Search the array
    {
        if (arr[j] == item)
        {
            break;
        }

        j++;
    }

    printf("\nElement %d is found at %d position", item, j + 1);
}