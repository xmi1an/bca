#include <stdio.h>

void main()
{
    char ch = '+';

    if (ch >= 'a' && ch <= 'z')
    {
        printf("Character is a Small Letter.");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("Character is Upper Letter");
    }

    else if (ch >= '0' && ch <= '9')
    {
        printf("Character is a Digit.");
    }
    else
    {
        printf("Character is a Special Letter.");
    }
}