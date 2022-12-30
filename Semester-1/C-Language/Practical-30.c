/* /this is for arrange the accepted number in accending and decending order. */
#include <stdio.h>
#include <conio.h>
void main()
{
    int temp, i, j, no[10], n;
    // clrscr();
    printf("\n Enter Range:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n Enter number:");
        scanf("%d", &no[i]);
    }
    // Ascending order
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (no[j] > no[j + 1])
            {
                temp = no[j];
                no[j] = no[j + 1];
                no[j + 1] = temp;
            }
        }
    }
    printf("\n Ascending Order : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", no[i]);
    }

    // descending order
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (no[j] < no[j + 1])
            {
                temp = no[j];
                no[j] = no[j + 1];
                no[j + 1] = temp;
            }
        }
    }

    printf("\n Descending Order : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d \n", no[i]);
    }
}
