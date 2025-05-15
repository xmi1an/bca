#include <stdio.h>
#include <conio.h>

/* Function to merge the subarrays of a[] */

void merge(int a[], int start, int mid, int end)
{
    int i = start;   // Starting index of first subarray
    int j = mid + 1; // Starting index of second subarray
    int k = start;   // Starting index of merged subarray
    int temp[10];    // Temporary array to store the merged subarray

    while (i <= mid && j <= end) // Traverse both the subarrays and in each iteration add smaller of both elements in temp
    {
        if (a[i] <= a[j]) //
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
    
    while (i <= mid) // Add remaining elements of first subarray in temp.
    {
        temp[k] = a[i];
        i++;
        k++;
    }
    while (j <= end) // Add remaining elements of second subarray in temp.
    {
        temp[k] = a[j];
        j++;
        k++;
    }
    for (i = start; i <= end; i++) // Copy the merged subarray into original array.
    {
        a[i] = temp[i];
    }
}
void divide(int a[], int start, int end)
{
    if (start < end) // if there is more than one element.
    {
        int mid = (start + end) / 2; // find the mid index.

        divide(a, start, mid);   // divide the array into two halves.
        divide(a, mid + 1, end); // divide the array into two halves.

        merge(a, start, mid, end); // merge the two halves.
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