#include <stdio.h>
#include <stdlib.h>

#define null NULL
#define nSize sizeof(node)
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

node *root = NULL;
// fn declaration
node *insert(node *root, int data);

node *createNode(int data);

int main(void)
{

    root = insert(root, 455);
    root = insert(root, 55);
    root = insert(root, 5);
    root = insert(root, 1455);
    root = insert(root, 255);
    root = insert(root, 15);
    

    return 0;
}

// fn definition
node *createNode(int data)
{
    node *newNode = malloc(nSize);
    if (newNode == null)
    {
        printf("\e[031m mem alloc failed .\n");
        return root;
    }

    newNode->data = data;
    newNode->left = null;
    newNode->right = null;

    return newNode;
}
node *insert(node *root, int data)
{
    if (root == null)
    {
        node *newNode = createNode(data);

        /*  root = newNode */;

        return newNode /* root */;
    }

    if (root->data > data)
    {
        if (root->left == null)
        {
            node *newNode = createNode(data);

            root->left = newNode;

            return root;
        }
        else
            root->left = insert(root->left, data);
    }
    else
    {
        if (root->right == null)
        {
            node *newNode = createNode(data);
            root->right = newNode;
            return root;
        }
        else
            root->right = insert(root->right, data);
    }
}
