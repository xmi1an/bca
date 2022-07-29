/* 7. Write a C program to enter a distance into K.M and convert it in to meter, feet,
inches and Centimeter  */

#include <stdio.h>
#include <conio.h>
void main()
{
    long int km, f, m, cm;
    float i;
    clrscr();

    printf("\nEnter Kilometer : ");
    scanf("%ld", &km);

    m = km * 1000;
    f = km * 32748;
    i = km * 3448.38;
    cm = km * 100000;

    printf("\n Meter : %ld", m);
    printf("\n Feet : %ld", f);
    printf("\n Inch :%f", i);
    printf("\n Centimeter= %ld", cm);
}
