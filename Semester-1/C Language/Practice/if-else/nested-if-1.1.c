#include <stdio.h>

void main()
{
    int i = 10;

    if (i == 10)
    {
        if (i < 9)
        {
            printf("i is smaller than 15\n");
        }

        if (i < 12)
        {
            printf("i is smaller than 12 too\n");
        }
        else
        {
            printf("i is greater than 15");
        }
    }
}
