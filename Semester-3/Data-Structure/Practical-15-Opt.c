/* 15. Write a c program for implementing a circular Queue and its operation. */

#include <stdio.h>

#define SIZE 5

int CQueue[SIZE];

int front = -1;
int rear = -1;

void enQueue(int value)
{
    if (front == rear + 1 || front == 0 && rear == SIZE - 1)
    {
        printf("Queue is Full..\n");
    }

    else if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        CQueue[rear] = value;
    }
    else if (rear == SIZE - 1)
    {
        rear = 0;
        CQueue[rear] = value;
        printf("Inserted : %d \n", value);
    }
    else
    {
        rear++;
        CQueue[rear] = value;

        printf("Inserted : %d \n", value);
    }
}

int deQueue()
{
    if (front == -1) // check CQueue is empty
    {
        printf("\nQueue is Empty..");
    }
    else if (front == rear)
    {
        printf("\nThe dequeued element is %d", CQueue[front]);
        front = -1;
        rear = -1;
    }
    else if (front == SIZE - 1)
    {
        printf("\nThe dequeued element is %d", CQueue[front]);
        front = 0;
    }
    else
    {
        printf("\nThe dequeued element is %d", CQueue[front]);
        front++;
    }
}

void display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("\n Queue is empty..");
    }
    else
    {
        printf("\nElements in a Queue are :");
        while (i != rear)
        {
            printf("%d ", CQueue[i]);
            i = (i + 1) % SIZE;
        }
        printf("%d ", CQueue[i]);
    }
}

void main()
{
    int choice = 1, x;

    while (1)
    {
        printf("\n1: Insert.");
        printf("\n2: Delete.");
        printf("\n3: Display.");
        printf("\n0: Exit.");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("Enter the element : ");
            scanf("%d", &x);
            enQueue(x);
            break;
        case 2:
            deQueue();
            break;
        case 3:
            display();
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("Enter a Valid Choice.\n");
        }
    }
}