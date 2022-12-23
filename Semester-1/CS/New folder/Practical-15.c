/*
15. Write a C program to Checked whether entered char is capital, small, digit or any special Character.
*/

#include <stdio.h>

void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is a capital letter.", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is a small letter.", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is a digit.", ch);
    }
    else
    {
        printf("%c is a special character.", ch);
    }
}