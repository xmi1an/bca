/* 18. Write a c program to insert an element into Sorted linked list. */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *head = NULL;

void append(int item)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->link = NULL;
    if (head == NULL)
        head = temp;
    else
    {
        struct node *p;
        p = head;
        while (p->link != NULL)
        {
            p = p->link;
        }
        p->link = temp;
    }
}

void insert(int data)
{
    struct node *travel;

    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    int key = data;
    if (head == NULL || key < head->data)
    {
        temp->link = head;
        head = temp;
    }

    else
    {
        travel = head;
        while (travel->link != NULL && travel->link->data < key)
        {
            travel = travel->link;
        }
        temp->link = travel->link;
        travel->link = temp;
    }
}

void display()
{
    struct node *p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->link;
    }
}

int main()
{

    append(10);
    append(20);
    append(30);
    append(50);

    printf("Before Insertion : ");
    display();

    insert(40);

    printf("\nAfter Insertion : ");
    display();
    return 0;
}