#include <stdio.h>
#include <stdlib.h>

// #define null NULL

typedef struct node
{
    int value;

    struct node *next;
} node;

node *head = NULL;

int nodeSize = sizeof(node);

node *insertAtBeg(int data);

node *insertAtEnd(int data);

node *deleteAtBeg();

node *deleteAtEnd();

void displayList();


int main(void)
{

    printf("'hello John ! '\n");

    head = insertAtBeg(25);  // 2
    head = insertAtBeg(125); // 1

    head = insertAtEnd(1452); // 3

    head = insertAtBeg(225);
    head = insertAtBeg(325);

    // head = deleteAtBeg();
    head = deleteAtEnd();

    displayList();

    return 0;
}

node *insertAtBeg(int data)
{
    node *newNode = malloc(nodeSize);
    newNode->value = data;

    if (newNode == NULL)
    {
        printf("mem allocation failed ");
        return NULL;
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

node *insertAtEnd(int data)
{

    if (head == NULL)
        return insertAtBeg(data);

    node *newNode = malloc(nodeSize);
    newNode->value = data;
    if (newNode == NULL)
    {
        printf("mem allocation failed ! \n");
        return head;
    }
    if (head->next == NULL)
    {
        head->next = newNode;
        newNode->next = NULL;

        return head;
    }

    else
    {
        node *temp = head;

        while (temp->next != NULL)

            temp = temp->next;

        temp->next = newNode;

        newNode->next = NULL;

        return head;
    }
}

node *deleteAtBeg()
{
    if (head == NULL)
    {
        puts("no node in the list ");

        return NULL;
    }
    node *temp = head;

    if (head->next == NULL)
    {
        printf("node data that was removed  --> %d, head data --> No data present\n", temp->value);

        printf("this list is now empty ! \n");

        free(temp);

        return head = NULL;
    }
    
    head = head->next;

    printf("node data that was removed  --> %d, head data --> %d \n", temp->value, head->value);

    free(temp);

    return head;
}

node *deleteAtEnd()
{
    if (head == NULL)
    {
        printf("the list is empty ! \n");
        return head;
    }

    node *temp = head;

    if (head->next == NULL)
    {
        printf("last node is empty ! \n ");

        free(temp);
        return head = NULL;
    }

    else
    {
        while (temp->next->next != NULL)

            temp = temp->next;

        printf(" node with data %d  deleted \n ", temp->next->value);

        free(temp->next);

        temp->next = NULL;
        return head;
    }
}

void displayList()
{

    if (head == NULL)
    {
        printf("this list is empty ! \n");

        return;
    }
    node *temp = head;
    while (temp != NULL )

    {

        printf("\t\tdata --->%d ||next -->%p\n ", temp->value, temp->next);
        temp = temp->next;
        
    }
}
