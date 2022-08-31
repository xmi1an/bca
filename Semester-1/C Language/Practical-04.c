/* 4. Write a C program to find the area of rectangle, cube and triangle.(Formula
are: Rectangle=l *b*h, triangle = (I * b)* 0.5, cube = L*L*L
 */
#include <stdio.h>
#include <conio.h>

void main()
{

    int rectangle;
    int cube;
    float triangle;

    int length = 25, breadth = 5, height = 4;

    rectangle = length * breadth;
    cube = length * length * length;
    triangle = (length * breadth) * 0.5;

    printf("\n Rectangle :%d ", rectangle);
    printf("\n Cube : %d", cube);
    printf("\n Triangle : %.2f \n", triangle);

    getch();
}