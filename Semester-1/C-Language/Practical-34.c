/* 34. Write a C program to sort given string in ascending order. */
#include <stdio.h>
#include <string.h>

void main()
{
    // The string to be sorted
    char str[] = "dbcea";
    int i,j;
    // Get the length of the string
    int n = strlen(str);

    // Sort the string using bubble sort
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1- i; j++)
        {
            if (str[j] > str[j + 1])
            {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    // Print the sorted string
    printf("Sorted string: %s\n", str);
}
