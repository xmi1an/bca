/* 8. Write a c program for sorting using merge sort method. */
#include <stdio.h>

/* Function to merge the subarrays of a[] */
void merge(int a[], int start, int mid, int end)
{
    int i = start;   /* initial index of first sub-array */
    int j = mid + 1; /* initial index of second sub-array */

    int b[20];
    int k = start;

    while (i <= mid && j <= end)
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }

    if (i > mid)
    {
        while (j <= end)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }

    for (k = start; k <= end; k++)
    {
        a[k] = b[k];
    }
}

void divide(int a[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        divide(a, start, mid);

        divide(a, mid + 1, end);
        merge(a, start, mid, end);
    }
}

/* Function to print the array */
void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main()
{

    int a[8] = {50, 10, 70, 60, 80, 40, 30, 20};

    int n = sizeof(a) / sizeof(a[0]);

    printf("Before sorting array elements are - \n");
    printArray(a, n);
    divide(a, 0, n - 1);

    printf("After sorting array elements are - \n");
    printArray(a, n);
    return 0;
}