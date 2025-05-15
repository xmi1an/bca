
#include <stdio.h>

int main()
{
    char ch = 'V';

    // printf("Enter any character: ");
    // scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("Character is an ALPHABET.");
    }
    else
    {
        printf("Character is NOT ALPHABET.");
    }

    return 0;
}