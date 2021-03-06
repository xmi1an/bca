/* 15. Write a c program for implementing a circular queue and its operation. */

#include <stdio.h>

#define SIZE 5
int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (front == rear + 1 || front == 0 && rear == SIZE - 1)
    {
        printf("Queue is Full..\n");
    }
    else
    {
        rear = (rear + 1) % SIZE;
        queue[rear] = value;

        printf("Inserted : %d \n", value);
        if (front == -1)
        {
            front = 0;
        }
    }
}

int dequeue()
{
    if ((front == -1) && (rear == -1)) // check queue is empty
    {
        printf("\nQueue is Empty..");
    }
    else if (front == rear)
    {
        printf("\nThe dequeued element is %d", queue[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("\nThe dequeued element is %d", queue[front]);
        front = (front + 1) % SIZE;
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
            printf("%d : %d. ", i, queue[i]);
            i = (i + 1) % SIZE;
        }
        printf("%d : %d ", i, queue[i]);
    }
}

void main()
{
    int choice = 1, x;

    while (1) // while loop
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
            enqueue(x);
            break;
        case 2:
            dequeue();
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