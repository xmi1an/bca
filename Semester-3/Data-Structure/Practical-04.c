/* 4. Write a c program for sorting using quick sort. (Partition exchange sort) method. */
#include <stdio.h>

int partition(int a[], int s, int e)
{
    int pivot = a[e];
    int pIndex = s;
    int i;

    for (i = s; i <= e - 1; i++)
    {
        if (a[i] <= pivot)
        {
            int temp = a[i];
            a[i] = a[pIndex];
            a[pIndex] = temp;

            pIndex++;
        }
    }

    // Swap end value with pIndex.
    int temp = a[e];
    a[e] = a[pIndex];
    a[pIndex] = temp;

    return pIndex;
}

void quickSort(int a[], int s, int e)
{

    int pIndex;
    if (s < e)
    {
        pIndex = partition(a, s, e);
        quickSort(a, s, pIndex - 1);
        quickSort(a, (pIndex + 1), e);
    }
}

int main()
{
    int i = 0;
    int arr[10] = {70, 40, 30, 80, 90, 50};

    while (i <= 5)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n\n");

    quickSort(arr, 0, 5);
    i = 0;

    printf("\n\n\n\n");

    while (i <= 5)
    {
        printf("%d ", arr[i]);
        i++;
    }
    return 0;
}