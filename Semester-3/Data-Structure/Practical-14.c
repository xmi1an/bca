/* 14. Write a c program for implementing a double ended queue and its operation. */

#include <stdio.h>
#include <conio.h>

#define size 5

void insertFront(int);
void insertRear(int);
void deleteFront();
void deleteRear();
void display();
void getFront();
void getRear();

int DEQ[size];
int front = -1;
int rear = -1;

//  insertFront function will insert the value from the front.
void insertFront(int value)
{
    if (front == 0 && rear == size - 1 || front == rear + 1)
    {
        printf("Queue is Full..\n");
    }

    else if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        DEQ[front] = value;
        printf("Element Inserted from front : %d \n", value);
    }
    else if (front == 0)
    {
        front = size - 1;
        DEQ[front] = value;
        printf("Element Inserted from front : %d \n", value);
    }
    else
    {
        front--;
        DEQ[front] = value;
        printf("Element Inserted from front : %d \n", value);
    }
}

// insertRear function will insert the value from the rear
void insertRear(int value)
{
    if ((front == 0 && rear == size - 1) || (front == rear + 1))
    {
        printf("Queue is Full..\n");
    }

    else if ((front == -1) && (rear == -1))
    {
        rear = 0;
        front = 0;
        DEQ[rear] = value;
        printf("Element Inserted from rear : %d \n", value);
    }

    else if (rear == size - 1)
    {
        rear = 0;
        DEQ[rear] = value;
        printf("Element Inserted from rear : %d \n", value);
    }

    else
    {
        rear++;
        DEQ[rear] = value;
        printf("Element Inserted from rear : %d \n", value);
    }
}

void deleteFront()
{
    if ((front == -1) && (rear == -1))
    {
        printf("Queue is empty..\n");
    }
    else if (front == rear)
    {
        printf("\nDeleted from front element is %d \n", DEQ[front]);
        front = -1;
        rear = -1;
    }
    else if (front == size - 1)
    {
        printf("\nDeleted from front element is %d \n", DEQ[front]);
        front = 0;
    }

    else
    {
        printf("\nDeleted from front element is %d \n", DEQ[front]);
        front++;
    }
}

void deleteRear()
{
    if ((front == -1) && (rear == -1))
    {
        printf("Queue is empty");
    }
    else if (front == rear)
    {
        printf("\nDeleted from rear element is %d \n", DEQ[rear]);
        front = -1;
        rear = -1;
    }
    else if (rear == 0)
    {
        printf("\nDeleted from rear element is %d \n", DEQ[rear]);
        rear = size - 1;
    }
    else
    {
        printf("\nDeleted from rear element is %d \n", DEQ[rear]);
        rear--;
    }
}

// Display function prints all the value of DEQ.
void display()
{
    int i = front;
    printf("\n\nElements in a Queue are: ");

    while (i != rear)
    {
        printf("%d ", DEQ[i]);
        i = (i + 1) % size;
    }
    printf("%d", DEQ[rear]);
}

void getFront()
{
    if ((front == -1) && (rear == -1))
    {
        printf("Queue is empty");
    }

    else
    {
        printf("\nThe Value at front is : %d", DEQ[front]);
    }
}

void getRear()
{
    if ((front == -1) && (rear == -1))
    {
        printf("Queue is empty");
    }
    else
    {
        printf("\nThe value at rear is : %d", DEQ[rear]);
    }
}

void main()
{
    // switch case for the operation of the queue.
    int choice;

    while (choice != 0)
    {
        printf("\n\n1. Insert at front");
        printf("\n2. Insert at rear");
        printf("\n3. Delete from front");
        printf("\n4. Delete from rear");
        printf("\n5. Display");
        printf("\n6. Get front");
        printf("\n7. Get rear");
        printf("\n0. Exit");

        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            int value;
            printf("\nEnter the value to be inserted at front : ");
            scanf("%d", &value);

            insertFront(value);
            break;
        }
        case 2:
        {
            int value;

            printf("\nEnter the value to be inserted at rear : ");
            scanf("%d", &value);

            insertRear(value);
            break;
        }

        case 3:
        {
            deleteFront();
            break;
        }
        case 4:
        {
            deleteRear();
            break;
        }
        case 5:
        {
            display();
            break;
        }
        case 6:
        {
            getFront();
            break;
        }
        case 7:
        {
            getRear();
            break;
        }
        case 0:
        {
            printf("\nExiting..\n");
            exit(1);
            break;
        }

        default:
        {
            printf("\nInvalid choice");
            break;
        }
        }
    }
}
