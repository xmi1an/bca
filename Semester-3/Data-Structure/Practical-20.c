/* 20. Write a c program for DFS and BFS technique. */

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

void preorder(struct node *t)
{
    if (t != NULL)
    {
        printf("%d ", t->data);
        preorder(t->left);
        preorder(t->right);
    }
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

void postorder(struct node *t)
{
    if (t != NULL)
    {
        postorder(t->left);
        postorder(t->right);
        printf("%d ", t->data);
    }
}

int main()
{
    struct node *root;
    root = create();
    printf("Preorder traversal: ");
    preorder(root);
    printf("\n");
    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");
    printf("Postorder traversal: ");
    postorder(root);
    return 0;
}
