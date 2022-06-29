/* 5. Write a c program for sorting using straight selection sort. */
#include <stdio.h>

#define size 6
int main()
{
    int i, min, findMin, temp;

    int arr[size] = {9, 2, 1, 4, 3, 7, 5};

    printf("Before Sort..\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (findMin = i + 1; findMin < size; findMin++)
        {
            if (arr[findMin] < arr[min]) // Find Minumum Value
            {
                min = findMin; // update min
            }
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    int k;
    printf("\n\nAfter Sort..\n");
    for (k = 0; k < size; k++)
    {
        printf("%d ", arr[k]);
    }
}