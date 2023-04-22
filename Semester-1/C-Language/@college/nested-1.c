

#include <stdio.h>

void main()
{
    char ch = '@';
    printf("Enter the Character : ");

    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Character is CAPITAl ");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Character is SMALL ");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Character is DIGIT..");
    }
    else
    {
        printf("Character is SYMBOL..");
    }
}