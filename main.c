#include <stdio.h>
#include <stdlib.h>

typedef struct node
{

    int value;

    struct node *next;

} node;

node *head = NULL;
int nodeSize = sizeof(node);
node *insert(int data)
{
    node *newNode = malloc(nodeSize);
    newNode->value = data;

    if (newNode == NULL)
    {
        printf("mem allocation failed ");
        exit(1);
    }
    if (head == NULL)
    {

        head = newNode;
        newNode->next = NULL;
        return head;
    }

    else
    {

        newNode->next = head;
        head = newNode;
        return head;
    }
}

node *delete()
{
    if (head == NULL)
    {
        puts("no node in the list ");

        exit(1);
    }
    node *temp = head;

    head = head->next;

    printf("node data that was removed  --> %d, head data --> %d \n", temp->value, head->value);

    free(temp);

    return head;
}

void displayList()
{
    node *temp = head;

    while (temp != NULL)

    {

        printf("\t\tdata --->%d ||next -->%p\n ", temp->value, temp->next);
        temp = temp->next;
    }
}

int main()
{

    printf("'hello'\n");

    head = insert(25);
    head = insert(125);
    head = insert(625);
    head = insert(1025);
    head = delete ();
    head = delete ();
    head = delete ();

    displayList();
    return 0;
}