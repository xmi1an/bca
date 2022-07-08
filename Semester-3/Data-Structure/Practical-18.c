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

insert(int data)
{
    struct node *temp;

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->link = NULL;

    int key = data;
    if (head == NULL || key < head->data)
    {
        newNode->link = head;
        head = newNode;
    }

    else
    {
        temp = head;
        while (temp->link != NULL && temp->link->data < key)
        {
            temp = temp->link;
        }
        newNode->link = temp->link;
        temp->link = newNode;
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

    insert(40);

    display();
    return 0;
}