/*
 *this file only contains the code for single linked list
 * []-->[]-->[]-->null
 * only implementation's are "NEXT" pointers
 * functions that are basic operation in linked list data structure
 */

#include <stdio.h>
#include <stdlib.h>

#define null NULL
#define print printf

#define and &&
#define or ||

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *head = null;

int nodeSize = sizeof(Node);

int sizeOfList = 0;

Node *insertAtBeg(Node *head, int data);
Node *deleteAtBeg(Node *head);

Node *insertAtEnd(Node *head, int data);
Node *deleteAtEnd(Node *head);

Node *insertAt(Node *head, int data, int position);

void display(Node *head);

int main()
{

    head = insertAtBeg(head, 22);
    head = insertAtBeg(head, 212);
    head = insertAtBeg(head, 1);

    head = insertAt(head, 255, 3);

    display(head);

    return 0;
}

Node *insertAtBeg(Node *head, int data)
{
    Node *newNode = malloc(nodeSize);

    if (newNode == null)
    {
        puts("mem alloc failed . ");
        return null;
    }
    newNode->data = data;

    if (head == null)
    {
        newNode->next = null;
        head = newNode;
        sizeOfList++;
        return head;
    }

    else
    {

        newNode->next = head;
        head = newNode;
        sizeOfList++;
        return head;
    }
}

Node *insertAtEnd(Node *head, int data)
{

    if (head == null)

        return insertAtBeg(head, data);

    Node *newNode = malloc(nodeSize);

    if (newNode == null)
    {
        puts("mem alloc failed . ");

        return head;
    }

    else
    {
        Node *temp = head;

        while (temp->next != null)
            temp = temp->next;

        newNode->data = data;

        temp->next = newNode;

        newNode->next = null;

        sizeOfList++;

        return head;
    }
}

Node *insertAt(Node *head, int data, int position)
{
    if (position == 1 or position < 1)

        return insertAtBeg(head, data);

    if (position > sizeOfList) // careful with comparison
    {
        puts("trying to insert at out of bound; will default to insertion at end .");

        return insertAtEnd(head, data);
    }

    if (head == null)
        return insertAtBeg(head, data);

    Node *newNode = malloc(nodeSize);

    if (newNode == null)
    {
        puts("mem alloc failed . ");
        return head;
    }

    Node *temp = head;

    newNode->data = data;

    int i = 1;

    while (i <= position && position < sizeOfList)
    {
        temp = temp->next;
        i++;
    }

    print(" temp ---> %p ", temp);

    if (temp->next == null)
    {

        print("last node insertion \n");

        return insertAtEnd(head, data);
    }

    newNode->next = temp->next;

    temp->next = newNode;

    sizeOfList++;

    return head;
}

Node *deleteAtBeg(Node *head)
{
    if (head == null)
    {
        puts("empty linked list !");

        return null;
    }

    else
    {
        Node *temp = head;

        head = head->next;

        free(temp);

        sizeOfList--;

        return head;
    }
}

Node *deleteAtEnd(Node *head)
{
    if (head == null)
    {
        puts("list is empty");
        return null;
    }

    if (head->next == null)
    {
        free(head);
        sizeOfList--;

        return head = null;
    }

    Node *temp = head;

    while (temp->next->next != null)

        temp = temp->next;

    free(temp->next);

    temp->next = null;
    sizeOfList--;
    return head;
}

Node *deleteAt(Node *head, int position)
{
}

void display(Node *head)
{

    if (head == null)
    {
        puts("empty linked list ");
        return;
    }

    Node *temp = head;
    puts("\n\n\t");
    while (temp != null)
    {
        printf("\e[0;37mdata --> \e[1;33m %d\t|", temp->data);
        printf("\e[0;37m next--> \e[1;34m  %p\n \t", temp->next);
        temp = temp->next;
    }
}
