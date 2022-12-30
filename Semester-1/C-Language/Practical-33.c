/* program for count no of words,character,line and spaces from given text.  */

#include <stdio.h>
#include <conio.h>
void main()
{
    int i, word, chr, line, space;
    char str[100], ch = 'A';
    clrscr();

    word = chr = line = space = 0;
    word = line = 1;

    printf("Enter String:(Exit Press@:)");
    for (i = 0; ch != '@'; i++)
    {
        ch = getchar();
        str[i] = ch;
    }

    str[i] = '\0';
    for (i = 0; str[i] != '@'; i++)
    {
        if (str[i] == ' ')
            space++;
        if (str[i] == '\n')
            line++;
        if (str[i] == ' ' && (str[i - 1] != ' ' && str[i - 1] != '\n'))
            word++;
        if (str[i] != ' ' && str[i - 1] != '\n' && str[i] == '\n')
            word++;
        chr++;
    }
    printf("\n space : %d", space);
    printf("\n word : %d", word);
    printf("\n line : %d", line);
    printf("\n char : %d", chr);
}
