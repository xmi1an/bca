/*  6. Write a c program for sorting using insertion sort. */
#include <stdio.h>

int main()
{
    int arr[5] = {12, 11, 13, 5, 6};

    int i, key, j;

    for (i = 1; i < 5; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}