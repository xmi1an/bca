/* 4. Write a c program for sorting using quick sort. (Partition exchange sort) method. */
#include <stdio.h>
#include <conio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int a[], int s, int e)
{
    int pivot = a[e];
    int pIndex = s;
    int i;
    for (i = s; i <= e - 1; i++)
    {
        if (a[i] <= pivot)
        {
            swap(&a[i], &a[pIndex]);
            pIndex++;
        }
    }
    swap(&a[e], &a[pIndex]);
    return pIndex;
}
void quickSort(int a[], int s, int e)
{
    int p;
    if (s < e)
    {
        p = partition(a, s, e);
        quickSort(a, s, p - 1);
        quickSort(a, p + 1, e);
    }
}

void main()
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
}