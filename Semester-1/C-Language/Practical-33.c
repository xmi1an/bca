/* 33. program for count no of words,character,line and spaces from given text.  */
#include <stdio.h>
void main()
{
    // declare variables
    char str[100];
    int line = 1, i;
    int word = 1;
    int ch = 0;
    int space = 0;
    // initialize count variables with zero

    printf("Enter String:(Exit Press@:)");
    gets(str);

    for (int i = 0; str[i] != '@'; i++)
    {
        if (str[i] == '\n')
        {
            line++;
            word++;
        }
        else if (str[i] == ' ')
        {
            space++;
            word++;
        }
        else if(str[i] >= 'a' || str[i] <= 'z' || str[i] >= 'A' || str[i] <= 'Z' )
        {
         ch++;   
        }
    }

    printf("Word counts = %d\n", word);
    printf("\nCharacter counts = %d\n", ch);
    printf("Line counts = %d\n", line);
    printf("Total Spaces = %d\n", space);

}
