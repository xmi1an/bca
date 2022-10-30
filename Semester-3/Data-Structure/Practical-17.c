/* 17. Write a c program for implementing a Doubly linked list and its operation. */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    struct node *next;
    int data;
};

struct node *head = NULL;

void prepend();
void append();
int lenght();
void display();
void addAtAfter();
void deletion_beginning();
void deletion_last();
void deletion_specified();
void search();

void main()
{
    int choice = 0;
    int len;
    while (choice != 9)
    {
        printf("1.Insert at begining \n");
        printf("2.Insert at last \n");
        printf("3.Insert at any random location \n");
        printf("4.Delete from Beginning \n");
        printf("5.Delete from last \n");
        printf("6.Delete the node after the given data \n");
        printf("7.Search \n");
        printf("8.Display\n");
        printf("9.Length\n");
        printf("0.Exit\n");

        printf("\nEnter your choice : ");
        scanf("\n%d", &choice);

        switch (choice)
        {
        case 1:
            prepend();
            break;
        case 2:
            append();
            break;
        case 3:
            addAtAfter();
            break;
        case 4:
            deletion_beginning();
            break;
        case 5:
            deletion_last();
            break;
        case 6:
            deletion_specified();
            break;
        case 7:
            search();
            break;
        case 8:
            display();
            break;
        case 9:
            len = lenght();
            printf("Length is : %d", len);
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("Please enter valid choice..");
        }
    }
}

void append()
{
    struct node *ptr, *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    scanf("%d", &temp->data);

    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL)
        head = temp;
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->prev = ptr;
    }
}

void prepend()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter Item value : ");
    scanf("%d", &temp->data);

    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL)
    {

        head = temp;
    }
    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

int lenght()
{
    struct node *prt = head;
    int count = 0;

    while (prt != NULL)
    {
        count++;
        prt = prt->next;
    }
    return count;
}

void addAtAfter()
{
    struct node *ptr, *temp;
    int len, loc, i = 1;

    scanf("%d", &loc);

    len = lenght();
    if (loc > len)
    {
        printf("Invalid Location..\n");
    }
    else
    {
        temp = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &temp->data);
        temp->prev = NULL;
        temp->next = NULL;
        ptr = head;
        while (i < loc)
        {
            ptr = ptr->next;
            i++;
        }
        temp->next = ptr->next;
        ptr->next->prev = temp;
        temp->prev = ptr;
        ptr->next = temp;
    }
}

void deletion_beginning()
{
    struct node *del;
    if (head == NULL)
    {
        printf("\n There is No Node in List..\n");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\n Node Deleted\n");
    }
    else
    {
        del = head;
        head = head->next;
        head->prev = NULL;
        free(del);
        printf("\nNode Deleted\n");
    }
}

void deletion_last()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("\n There is No Node in List..\n");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nNode Deleted\n");
    }
    else
    {
        ptr = head;
        if (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->prev->next = NULL;
        free(ptr);
        printf("\nNode deleted\n");
    }
}

void deletion_specified()
{
    struct node *ptr, *temp;
    int val;
    printf("\n Enter the data after which the node is to be deleted : ");
    scanf("%d", &val);
    ptr = head;
    while (ptr->data != val)
        ptr = ptr->next;

    if (ptr->next == NULL)
    {
        printf("\nCan't delete\n");
    }
    else if (ptr->next->next == NULL)
    {
        ptr->next = NULL;
    }
    else
    {
        temp = ptr->next;
        ptr->next = temp->next;
        temp->next->prev = ptr;
        free(temp);
        printf("\nnode deleted\n");
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

void search()
{
    struct node *ptr;
    int item, i = 0, found = 0;
    ptr = head;
    if (ptr == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search?\n");
        scanf("%d", &item);
        while (ptr != NULL)
        {
            if (ptr->data == item)
            {
                printf("\nitem found at location %d \n", i + 1);
                found = 1;
                break;
            }
            else
            {
                found = 0;
            }
            i++;
            ptr = ptr->next;
        }
        if (found == 0)
        {
            printf("\nItem not found\n");
        }
    }
}