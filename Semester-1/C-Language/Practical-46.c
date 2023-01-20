/* 46. Write a C program to display following output on the screen
 C
 CP
 CPR
 CPRO
 …..
 CPROGRAMMING
 …..
 CPRO
 CPR
 CP
 C
 */
#include <stdio.h>
int main()
{
    int i, j;
    char s[] = "CPROGRAMMING";
    // prints upper half.
    for (i = 0; i <= 11; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", s[j]);
        }
        printf("\n");
    }

    // prints lower-half
    for (i = 10; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", s[j]);
        }
        printf("\n");
    }
}
