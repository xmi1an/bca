#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *head = NULL;

void append()
{
    struct node *temp;

    temp = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter Data : ");
    scanf("%d", &temp->data);

    printf("Data Inserted : %d \n", temp->data);

    temp->link = NULL;

    if (head == NULL)
    {
        head = temp;
        printf("%d", head);
    }
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

void addAtAfter()
{
    struct node *travel = head;
    struct node *temp;
    int loc, len, i = 1;

    printf("Enter Location : ");
    scanf("%d", &loc);

    len = length();
    if (loc > len)
    {
        printf("Invalid Location.\n");
        printf("Total Nodes is : %d \n\n", len);
    }
    else
    {
        while (i < loc)
        {
            travel = travel->link;
            i++;
        }

        temp = (struct node *)malloc(sizeof(struct node));

        printf("Enter Data To Insert in Node :");
        scanf("%d", &temp->data);

        temp->link = NULL;

        temp->link = travel->link;
        travel->link = temp;
    }
}

void main()
{
    append();
    append();
    append();
    append();
    append();
    append();
}
