/* 19. Write a c program for create a binary tree and its operation. */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create()
{
    struct node *temp;
    int data, choice;

    temp = (struct node *)malloc(sizeof(struct node));

    printf("1. New node.\n");
    printf("0. Exit. \n");
    printf("Enter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter the data:");
        scanf("%d", &data);
        temp->data = data;

        printf("Enter the left child of %d : \n", data);
        temp->left = create();

        printf("Enter the right child of %d \n", data);
        temp->right = create();

        return temp;

        break;
    case 0:
        return NULL;
        break;

    default:
        break;
    }
}

void main()
{
    struct node *root;
    root = create();
}
