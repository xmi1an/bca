/* 16. Write a C program to read number 1 to 7 and print relatively day Sunday to Saturday. */

#include <stdio.h>
#include <conio.h>

void main()
{
    int day;
    clrscr();

    printf("Enter Day : ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Invalid Day..");
    }
    getch();
}
