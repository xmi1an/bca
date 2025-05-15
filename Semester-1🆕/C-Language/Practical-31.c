/* This is program for accepted string is pelindrom or not. */

#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
    char str[100], len, i;
    // clrscr();
    printf("\n Enter any string:");
    gets(str);
    len = strlen(str) - 1;
    for (i = 0; str[i] != '\0'; i++, len--)
    {
        if (str[i] != str[len])
            break;
    }
    if (i == strlen(str))
        printf("Entered string is pelindrom");
    else
        printf("Entered string is not pelindrom");
}