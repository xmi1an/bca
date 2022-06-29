/* 7. Write a c program for sorting using shell-sort method. */

#include <stdio.h>

int shellSort(int a[], int n)
{
    int gap;
    for (gap = n / 2; gap > 0; gap /= 2)
    {
        int i = 0;
        for (i = gap; i < n; i++)
        {
            int temp = a[i];
            int j;
            for (j = i; j >= gap && a[j - gap] > temp; j = j - gap)
            {
                a[j] = a[j - gap];
            }
            a[j] = temp;
        }
    }
    return 0;
}

void printArr(int a[], int n) /* function to print the array elements */
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}

int main()
{
    int a[] = {33, 31, 40, 8, 12, 17, 25, 42};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Before sorting array elements are - \n");

    printArr(a, n);

    shellSort(a, n);

    printf("\nAfter applying shell sort, the array elements are - \n");

    printArr(a, n);
    return 0;
}