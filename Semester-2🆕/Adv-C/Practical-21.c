/* Write C a program using pointers to read an array of integers and print its elements in reverse order. */

#include <stdio.h>

void main()
{
    int arr[10], i, n;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ptr = &arr[n - 1];

    printf("The elements in reverse order are: ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", *ptr);
        ptr--;
    }
}
