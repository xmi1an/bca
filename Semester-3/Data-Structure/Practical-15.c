/* 15. Write a c program for implementing a circular queue and its operation. */

#include <stdio.h>

#define SIZE 5
int myarray[SIZE];
int front = -1;
int rear = -1;

void enQueue(int ele)
{
    if (front == rear + 1 || rear == SIZE - 1)
    {
        printf("Queue is Full..! \n");
    }

    else if (front == -1 && rear == -1)
    {
        front = 0, rear = 0;
        myarray[rear] = ele;
        printf("1. Element inserted : %d \n", ele);
    }

    else if (rear == SIZE - 1)
    {
        rear = 0;
        myarray[rear] = ele;
        printf("2. Element inserted : %d \n", ele);
    }

    else
    {
        rear++;
        myarray[rear] = ele;
        printf("3. Element inserted : %d  \n", ele);
    }
}

deQueue()
{
    int ele;
    if (front == -1 && rear == -1)
    {
        printf("Queue is Empty");
    }

    else if (front == rear)
    {
        ele = myarray[front];
        printf("1. Element Deleted : %d \n", ele);
        front = -1, rear = -1;
    }
    else if (front == SIZE - 1)
    {
        ele = myarray[front];
        printf("2. Element Deleted : %d \n", ele);
        front = 0;
    }
    else
    {
        ele = myarray[front];
        front++;
        printf("3. Element Deleted : %d \n", ele);
    }
}

void main()
{
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    enQueue(60);

    deQueue();
    deQueue();

    enQueue(60);
    enQueue(70);
    enQueue(80);
    enQueue(80);
}