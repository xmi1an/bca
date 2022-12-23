#include <stdio.h>
#include <conio.h>
void merge(int[], int, int, int);

void merge(int a[], int start, int mid, int end)
{
    int cnt = 0;
    cnt++;
    printf("debug : %d \n", cnt);
    int temp[10];
    int i = start;
    int j = mid + 1;
    int k = start;

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
        i++;
        k++;
    }

    for (i = start; i <= end; i++)
    {
        a[i] = temp[i];
    }
}

void divide(int a[], int start, int end)
{
    int mid;
    if (start < end)
    {
        mid = (start + end) / 2;

        divide(a, start, mid);
        divide(a, mid + 1, end);

        merge(a, start, mid, end);
    }
}

void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void main()
{
    int start = 0, end = 5, i;
    int a[8] = {50, 10, 70, 60, 80, 40, 30, 20};

    // clrscr();

    printf("before sorting: ");
    printArray(a, 7);

    divide(a, 0, 7);

    printf("after sorting:");
    printArray(a, 7);

    // getch();
}