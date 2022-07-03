/* 13. Write a c program for implementing a simple queue and its operation. */

#include <stdio.h>

#define SIZE 5

int myqueue[SIZE];
int front = -1, rear = -1;

void enQueue(int);
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

void enQueue(int value)
{
    if (rear == SIZE - 1)
        printf("\nQueue is Full.. \n\n");
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        myqueue[rear] = value;
        printf("\nInserted : %d \n\n", value);
    }
}

void deQueue()
{
    if (front == -1)
        printf("\nQueue is Empty!!\n");
    else
    {
        printf("\nItem Deleted : %d \n", myqueue[front]);
        front++;
        if (front > rear)
            front = rear = -1;
    }
}

void display()
{
    if (rear == -1 && front == -1)
        printf("\nQueue is Empty!!!");
    else
    {
        int i;
        printf("\nQueue elements are:\n");
        for (i = front; i <= rear; i++)
            printf("%d  ", myqueue[i]);
    }
    printf("\n");
}
