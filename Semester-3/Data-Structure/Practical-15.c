/* 15. Write a c program for implementing a circular queue and its operation. */

#include <stdio.h>

#define LENGTH 6
int queue[LENGTH];
int front = -1;
int rear = -1;
// function to insert an element in a circular queue
void enqueue(int element)
{
    if (front == -1 && rear == -1) // check queue is empty
    {
        front = 0;
        rear = 0;
        queue[rear] = element;
        printf("First Element Inserted. \n");
    }

    else if ((rear + 1) % LENGTH == front) // check queue is full
    {
        printf("Queue is Full.\n");
    }

    else
    {
        rear = (rear + 1) % LENGTH; // rear is incremented
        queue[rear] = element;
    }
}

// function to delete the element from the queue
int dequeue()
{
    if ((front == -1) && (rear == -1)) // check queue is empty
    {
        printf("\nQueue is underflow..");
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
        front = (front + 1) % LENGTH;
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
        while (i <= rear)
        {
            printf("%d,", queue[i]);
            i = (i + 1) % LENGTH;
        }
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
            printf("Enter a Va1lid Choice.\n");
        }
    }
}