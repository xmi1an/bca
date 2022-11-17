/* 20. Write a c program for DFS and BFS technique. */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void printCurrentLevel(struct node *root, int level);
int height(struct node *node);

void printLevelOrder(struct node *root)
{
    int h = height(root);
    int i;
    for (i = 1; i <= h; i++)
        printCurrentLevel(root, i);
}

/* Print nod    es at a current level */
void printCurrentLevel(struct node *root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ", root->data);
    else if (level > 1)
    {
        printCurrentLevel(root->left, level - 1);
        printCurrentLevel(root->right, level - 1);
    }
}

/* Compute the "height" of a tree -- the number of
    nodes along the longest path from the root node
    down to the farthest leaf node.*/
int height(struct node *node)
{
    if (node == NULL)
        return 0;
    else
    {
        /* compute the height of each subtree */
        int lheight = height(node->left);
        int rheight = height(node->right);

        /* use the larger one */
        if (lheight > rheight)
            return (lheight + 1);
        else
            return (rheight + 1);
    }
}

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

// DFS
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

    printf("\n\n(BFS) OR Level Order traversal of binary tree is \n");
    printLevelOrder(root);

    return 0;
}