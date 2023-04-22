/* 32. program for convert given line into uppercase or lowercase. */

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
    int i;
    char str[60], ch;
    // clrscr();
    printf("Enter string:");

    gets(str);

    printf("\nPress U for upper case");
    printf("\nPress L for lower case");
    printf("\n Enter your choice : ");

    scanf("%c", &ch);
    switch (ch)
    {
    case 'U':
    case 'u':
        for (i = 0; str[i]; i++)
        {
            putchar(toupper(str[i]));
        }
        break;
    case 'L':
    case 'l':
        for (i = 0; str[i]; i++)
        {
            putchar(tolower(str[i]));
        }
        break;
    default:
        printf("\n your choice is wrong");
        break;
    }
    getch();
}