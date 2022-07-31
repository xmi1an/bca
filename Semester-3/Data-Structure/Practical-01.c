/*  1. Write a c program for linear search which find an element in an unsorted list. */

#include <stdio.h>
#include <conio.h>

int searchItem(int *, int);

int searchItem(int a[], int search)
{
    int j = 0;
    for (j = 0; j < 5; j++)
    {
        if (a[j] == search)
        {
            return j;
        }
    }
    return -1;
}

void main()
{
    int arr[5] = {18, 30, 15, 70, 12};
    int item = 15, i, j = 0;
    clrscr();
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    int result = searchItem(arr, item);

    if (result == -1)
    {
        printf("Item Not Found..!\n");
    }
    else
    {
        printf("\nElement %d is found at %d position", item, result);
    }

    getch();
}