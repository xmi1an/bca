#include <stdio.h>
#define size 5

int front = -1;
int rear = -1;
int DEq[size];

insertRear(int value)
{

    if (front == rear + 1 || front == 0 && rear == size - 1)
    {
        printf("Queue is full..\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        DEq[rear] = value;
    }

    else
    {
        rear++;
        DEq[rear] = value;
    }
}