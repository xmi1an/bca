/* 2. Write a c program for binary search which find the location of a given element in a list. */

#include <stdio.h>
#include <conio.h>

int binarySearch(int array[], int x, int beg, int end)
{
    while (beg <= end)
    {
        int mid = (beg + end) / 2;

        if (array[mid] == x)
        {
            return mid;
        }

        else if (array[mid] < x)
        {
            beg = mid + 1;
        }

        else
            end = mid - 1;
    }
    return -1;
}

void main()
{
    int array[10] = {4, 10, 16, 24, 32, 46, 76, 112, 144, 186};

    int search = 5;

    int result = binarySearch(array, search, 0, 9);

    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);
}