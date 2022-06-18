/* 13. Write a c program for implementing a simple queue and its operation. */

#include <stdio.h>

#define SIZE 5

int myqueue[SIZE];
int front, rear = 0;
void enQueue();
void deQueue();
void display();

int main()
{
    int choice;
    int item, len;
    while (1)
    {
        printf("1. enQueue. \n");
        printf("2. deQueue. \n");
        printf("3. Display \n");

        printf("Enter Your Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Element to enQueue : ");
            scanf("%d", &item);
            enQueue(item);
            break;
        case 2:
            deQueue();
            break;
        case 3:
            display();
            break;
        case 0:
            exit(0);
        default:
            printf("Invalid Choice. \n\n");
        }
    }
    return 0;
}

void enQueue(int data)
{
    if (rear == SIZE)
    {
        printf("Queue is Full..\n");
    }
    else
    {
        myqueue[rear] = data;
        printf("Item Enqueued : %d \n", data);
        rear++;
    }
}

void deQueue()
{
    int i;
    if (front == rear)
    {
        printf("Queue is Empty..\n");
    }
    else
    {
        printf("Dequeued Item : %d \n\n", myqueue[front]);
        for (i = 0; i < rear - 1; i++)
        {
            myqueue[i] = myqueue[i + 1];
        }
        rear--;
    }
}

void display()
{

    int i = 0;
    if (front == rear)
    {
        printf("Queue is Empty..\n");
    }
    else
    {
        printf("---------- Total Items -------------- \n");

        while (i < rear)
        {
            printf("%d \n", myqueue[i]);
            i++;
        }
    }
}
