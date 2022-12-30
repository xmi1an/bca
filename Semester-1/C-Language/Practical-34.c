/* 34. Write a C program to sort given string in ascending order. */

#include <stdio.h>
#include <conio.h>
void main()
{
    char str[30], ch;
    int i, j;
    // clrscr();
    // abcde

    // printf("Enter String:");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; str[j] != '\0'; j++)
        {
            if (str[i] < str[j])
            {
                ch = str[i];
                str[i] = str[j];
                str[j] = ch;
            }
        }
    }

    printf("\n\nAfter sorting String is: %s", str);
}