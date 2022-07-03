/* 2. Write a c program for binary search which find the location of a given element in a list. */
#include <stdio.h>
int binarySearch(int array[], int x, int low, int high)
{
    while (low <= high)
    {
        int mid = (high + low) / 2;

        if (array[mid] == x)
            return mid;

        else if (array[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

void main()
{
    int array[10] = {4, 10, 16, 24, 32, 46, 76, 112, 144, 186};

    int search = 46;

    int result = binarySearch(array, search, 0, 9);
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);
}