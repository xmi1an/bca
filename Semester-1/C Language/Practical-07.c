/* 7. Write a C program to enter a distance into K.M and convert it in to meter, feet,
inches and Centimeter. */

#include <stdio.h>
#include <conio.h>
void main()
{
    float km, f, m, cm, i;

    // clrscr();

    printf("Enter Kilometer : ");
    scanf("%f", &km);

    m = km * 1000;
    f = km * 3280.84;
    i = km * 39370;
    cm = km * 100000;

    printf("\nMeter : %.2f \n", m);
    printf("Feet : %.2f \n", f);
    printf("Inch :%.2f \n", i);
    printf("Centimeter= %.2f \n", cm);
}