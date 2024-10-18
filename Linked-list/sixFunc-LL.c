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

int nodeSize = sizeof(Node);

Node *head = null;

Node *insertAtBeg(Node *head, int data);
Node *deleteAtBeg(Node *head);

Node *insertAtEnd(Node *head, int data);
Node *deleteAtEnd(Node *head);




void display(Node *head);

int main()
{
    // head = insertAtEnd(head, 6666);
    // head = insertAtEnd(head, 1166);
    head = insertAtBeg(head, 22);
    head = insertAtBeg(head, 212);
    head = insertAtBeg(head, 212342);
    head = insertAtBeg(head, 2156612);
    // head = insertAtEnd(head, 6666);
    // head = insertAtBeg(head, 4422);
    // head = insertAtBeg(head, 122);
    // head = insertAtEnd(head, 6666);
    
    display(head);

    // head = deleteAtBeg(head);


    head = deleteAtEnd(head);
    head = deleteAtEnd(head);

    head = deleteAtEnd(head);
    head = deleteAtEnd(head);

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
        return head;
    }

    else
    {

        newNode->next = head;
        head = newNode;
        return head;
    }
}

Node *insertAtEnd(Node *head, int data)
{

    if (head == null)
    {
        return insertAtBeg(head, data);
    }

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
        {
            temp = temp->next;
        }

        newNode->data = data;

        temp->next = newNode;

        newNode->next = null;

        return head;
    }
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

        return head = null;
    }
    Node *temp = head;

    while (temp->next->next != null)
    {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = null;

    return head;
}

void display(Node *head)
{

    if (head == null)
    {
        puts("empty linked list ");
        return;
    }

    Node *temp = head;
    puts("\n\n");
    while (temp != null)
    {
        printf("\e[0;37mdata --> \e[0;33m %d\t|", temp->data);
        printf(" \e[0;37m next--> \e[0;34m  %p\n ", temp->next);
        temp = temp->next;
    }
}
