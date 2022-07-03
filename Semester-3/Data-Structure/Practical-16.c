/* 16. Write a c program for implementing a Singly linked list and its operation. */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void append();
void addAtBegin();
void addAtAfter();
int length();
void display();
void deleteNode();

struct node
{
    int data;
    struct node *link;
};

struct node *head = NULL;
int len;
int main()
{
    int ch;
    while (1)
    {
        printf(" 1. Append. \n 2. Add At Begin. \n 3. Add At After. \n 4. Length. \n 5. Display. \n 6. Delete. \n 0. Quit.\n");
        printf("\n\n Enter Your Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            append();
            break;
        case 2:
            addAtBegin();
            break;
        case 3:
            addAtAfter();
            break;
        case 4:
            len = length();
            printf("Length : %d \n", len);
            break;
        case 5:
            display();
            break;
        case 6:
            deleteNode();
            break;
        case 0:
            printf("Bye Bye..!. \n\n");
            exit(0);
        default:
            printf("Invalid Choice. \n\n");
        }
    }
    return 0;
}

void append()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data : ");
    scanf("%d", &temp->data);
    printf("Data Inserted : %d \n\n", temp->data);
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

void addAtBegin()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node)); //&5000 data=50 link=head head=temp
    printf("Enter Data to Insert at Begin : ");
    scanf("%d", &temp->data); // 50
    temp->link = head;
    head = temp;

    printf("Data Inserted at Begin : %d \n", temp->data);
}

void addAtAfter()
{
    struct node *travel = head, *temp;
    int loc, len, i = 1;
    printf("Enter Location : ");
    scanf("%d", &loc); // 7
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

int length()
{
    int count = 0;
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->link;
    }
    return count;
}

void deleteNode()
{
    struct node *temp = head;
    int loc;
    display();
    printf("Enter Location To Delete : ");
    scanf("%d", &loc);
    if (loc > length())
    {
        printf("Invalid Location.\n\n");
    }

    else if (loc == 1)
    {
        head = temp->link;
        temp->link = NULL;
        free(temp);
    }
    else
    {
        struct node *travel = head, *del;
        int i = 1;
        while (i < loc - 1)
        {
            travel = travel->link;
            i++;
        }
        del = travel->link;
        travel->link = del->link;
        del->link = NULL;
        free(del);
    }
}

void display()
{
    if (head == NULL)
    {
        printf("No Elements in Linked List..\n\n");
    }
    else
    {
        struct node *temp;
        temp = head;
        int cnt = 1;
        while (temp != NULL)
        {
            printf("%d. %d\n", cnt, temp->data);
            temp = temp->link;
            cnt++;
        }
    }
}
