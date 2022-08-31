/* 7. Write a c program for sorting using shell-sort method. */

#include <stdio.h>
#include <conio.h>

    void shellSort(int a[], int n)
    {
        int gap = n / 2;
        while (gap > 0)
        {
            int i;
            for (i = gap; i < n; i++)
            {
                int key = a[i];
                int j = i;

                while (j >= gap && a[j - gap] > key)
                {
                    a[j] = a[j - gap];
                    j = j - gap;
                }
                a[j] = key;
            }
            gap = gap / 2;
        }
    }

void main()
{
    int i;
    int a[9] = {33, 31, 40, 8, 12, 17, 25, 42, 21};

    // int n = sizeof(a) / sizeof(a[0]);

    printf("Before sorting array elements are - \n");
    for (i = 0; i < 9; i++)
        printf("%d ", a[i]);

    shellSort(a, 9);

    printf("\nAfter applying shell sort, the array elements are - \n");
    for (i = 0; i < 9; i++)
        printf("%d ", a[i]);

    getch();
}