/* 8. Write a c program for sorting using merge sort method. */
#include <stdio.h>

/* Function to merge the sutemparrays of a[] */

void merge(int a[], int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    int k = start;
    int temp[10];

    while (i <= mid && j <= end)
    {
        if (a[i] <= a[j])
        {
            temp[k] = a[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = a[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        temp[k] = a[i];
        i++;
        k++;
    }
    while (j <= end)
    {
        temp[k] = a[j];
        j++;
        k++;
    }
    for (i = start; i <= end; i++)
    {
        a[i] = temp[i];
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