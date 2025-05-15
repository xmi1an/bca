/* 19. Write a c program for create a binary tree and its operation. */

// Data Structure All Practicals Completed.

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
    struct node *p;
    int x;
    printf("Enter -1 for no node : ");
    scanf("%d", &x);
    if (x == -1)
    {
        return NULL;
    }
    p = (struct node *)malloc(sizeof(struct node));
    p->data = x;
    printf("Enter left child of %d: ", x);
    p->left = create();
    printf("Enter right child of %d: ", x);
    p->right = create();
    return p;
}

void inorder(struct node *t)
{
    if (t != NULL)
    {
        inorder(t->left);
        printf("%d ", t->data);
        inorder(t->right);
    }
}

int main()
{
    struct node *root;
    root = create();

    printf("Inorder traversal: ");
    inorder(root);

    return 0;
}
