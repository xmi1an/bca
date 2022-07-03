/* 14. Write a c program for implementing a double ended queue and its operation. */

#include <stdio.h>

// Prototypes of functions.
void insertFront(int);
void insertRear(int);
void display();
void getFront();
void getRear();
void deleteFront();
void deleteRear();

#define size 5
int myArray[size];
int front = -1, rear = -1;
//  insertFront function will insert the value from the front
void insertFront(int x)
{
    if ((front == 0 && rear == size - 1) || (front == rear + 1))
    {
        printf("Overflow");
    }
    else if ((front == -1) && (rear == -1))
    {
        front = rear = 0;
        myArray[front] = x;
    }
    else if (front == 0)
    {
        front = size - 1;
        myArray[front] = x;
    }
    else
    {
        front = front - 1;
        myArray[front] = x;
    }
}

// insertRear function will insert the value from the rear
void insertRear(int x)
{
    if ((front == 0 && rear == size - 1) || (front == rear + 1))
    {
        printf("Overflow");
    }
    else if ((front == -1) && (rear == -1))
    {
        rear = 0;
        myArray[rear] = x;
    }
    else if (rear == size - 1)
    {
        rear = 0;
        myArray[rear] = x;
    }
    else
    {
        rear++;
        myArray[rear] = x;
    }
}

// Display function prints all the value of myArray.
void display()
{
    int i = front;
    printf("\nElements in a myArray are: ");

    while (i != rear)
    {
        printf("%d ", myArray[i]);
        i = (i + 1) % size;
    }
    printf("%d", myArray[rear]);
}

void getFront()
{
    if ((front == -1) && (rear == -1))
    {
        printf("myArray is empty");
    }
    else
    {
        printf("\nThe Value at front is : %d", myArray[front]);
    }
}

void getRear()
{
    if ((front == -1) && (rear == -1))
    {
        printf("myArray is empty");
    }
    else
    {
        printf("\nThe value at rear is : %d", myArray[rear]);
    }
}

void deleteFront()
{
    if ((front == -1) && (rear == -1))
    {
        printf("myArray is empty..\n");
    }
    else if (front == rear)
    {
        printf("\nThe deleted element is %d", myArray[front]);
        front = -1;
        rear = -1;
    }
    else if (front == (size - 1))
    {
        printf("\nThe deleted element is %d", myArray[front]);
        front = 0;
    }
    else
    {
        printf("\nThe deleted element is %d", myArray[front]);
        front++;
    }
}

void deleteRear()
{
    if ((front == -1) && (rear == -1))
    {
        printf("myArray is empty");
    }
    else if (front == rear)
    {
        printf("\nThe deleted element is %d", myArray[rear]);
        front = -1;
        rear = -1;
    }
    else if (rear == 0)
    {
        printf("\nThe deleted element is %d", myArray[rear]);
        rear = size - 1;
    }
    else
    {
        printf("\nThe Deleted Element is %d", myArray[rear]);
        rear--;
    }
}

void main()
{
    insertFront(10);
    insertFront(20);
    insertRear(30);
    insertRear(40);
    insertRear(50);

    display();

    getFront();
    getRear();

    deleteFront();
    deleteRear();

    display();
}