#include <stdio.h>
#include <stdlib.h>
#define NodeSize sizeof(Node)
typedef struct Node
{
    int data;

    struct Node *next;
    struct Node *prev;
} Node;

void displayList(int rev, Node *ptr);

void insertAtBeg(Node **headPtr, Node **tailPtr, int data);

void insertAtEnd(Node **headPtr, Node **tailPtr, int data);

void deleteAtBeg(Node **headPtr, Node **tailPtr);

void deleteAtEnd(Node **headPtr, Node **tailPtr);

void insertAt(Node **headPtr, Node **tailPtr, int data, int position);

int main(int argc, char **argv)
{
    Node *head = NULL;

    Node *tail = NULL;

    /*   insertAtBeg(&head, &tail, 255);

      insertAtBeg(&head, &tail, 1255);

      insertAtBeg(&head, &tail, 55); */
    /*     deleteAtBeg(&head, &tail);
        deleteAtBeg(&head, &tail); */
    /*   deleteAtBeg(&head, &tail);
      deleteAtBeg(&head, &tail);
      deleteAtBeg(&head, &tail); */
    /*  insertAtEnd(&head, &tail, 25);
     deleteAtBeg(&head, &tail);

     insertAtEnd(&head, &tail, 55);
     insertAtEnd(&head, &tail, 65); */
    // deleteAtEnd(&head, &tail);
    // insertAt(&head, &tail, 255, 8);
  
    insertAtBeg(&head, &tail, 12);
    insertAtBeg(&head, &tail, 17);
    insertAtBeg(&head, &tail, 5);
    insertAtBeg(&head, &tail, 9);

    // 9 5 17 12

    insertAt(&head, &tail, 15, 4);
    insertAt(&head, &tail, 15, 4);
    insertAt(&head, &tail, 5555, 4);
    insertAt(&head, &tail, 5555, 0);
    // insertAt(&head, &tail, 255, 5);

    // displayList(1, tail);
    displayList(0, head);
    return 0;
}

void insertAtBeg(Node **headPtr, Node **tailPtr, int data)
{

    if (*headPtr == NULL)
    {
        Node *newNode = (Node *)malloc(NodeSize);
        newNode->data = data;

        newNode->next = NULL;
        newNode->prev = NULL;
        *headPtr = newNode;
        *tailPtr = newNode;
    }

    else
    {
        Node *newNode = (Node *)malloc(NodeSize);

        newNode->data = data;

        newNode->next = *headPtr;
        newNode->prev = NULL; // this can cause issue while accessing values be careful when making this

        (*headPtr)->prev = newNode;
        (*headPtr) = newNode;
    }
}
void insertAtEnd(Node **headPtr, Node **tailPtr, int data)
{
    if (*headPtr == NULL && *tailPtr == NULL)
    {
        insertAtBeg(headPtr, tailPtr, data);
        printf(" list is empty \n");
        return;
    }
    else
    {
        Node *newNode = (Node *)malloc(NodeSize);
        newNode->data = data;
        newNode->next = NULL;

        (*tailPtr)->next = newNode;
        newNode->prev = (*tailPtr);

        (*tailPtr) = newNode;
    }
}
void deleteAtBeg(Node **headPtr, Node **tailPtr)
{
    if ((*headPtr) == NULL)
    {
        puts("the list is empty ");
        return;
    }
    if ((*headPtr)->next == NULL)
    {
        free(*headPtr);

        *headPtr = NULL;
        *tailPtr = NULL;
        /*   printf("%d", *headPtr);
          printf("%d", head); */
        return;
    }

    Node *t = *headPtr;

    *headPtr = (*headPtr)->next;
    (*headPtr)->prev = NULL;
    free(t);
}
void deleteAtEnd(Node **headPtr, Node **tailPtr)
{
    if ((*tailPtr) == NULL)
    {
        puts("the list is empty ");
        return;
    }
    if ((*tailPtr)->prev == NULL)
    {
        free(*tailPtr);

        *headPtr = NULL;
        *tailPtr = NULL;
        return;
    }

    Node *t = *tailPtr;

    *tailPtr = (*tailPtr)->prev;

    (*tailPtr)->next = NULL;
    free(t);
}

void insertAt(Node **headPtr, Node **tailPtr, int data, int position)
{

    if (((*headPtr == NULL && *tailPtr == NULL)) || position <= 0)
    {
        insertAtBeg(&*headPtr, &*tailPtr, data);
        return;
    }

    else
    {
        Node *t = (*headPtr);

        int i = 1;

        while (i++ < position && t->next != NULL)
        {
           
            // printf("%d ", t->data);
            t = t->next;
        }

        // printf("%d %d ", t->data, t->next);
        if (t->next == NULL)
        {
            puts("inserting at end; wrong out of bound index");
            insertAtEnd(&*headPtr, &*tailPtr, data);
            return;
        }

        Node *newNode = (Node *)malloc(NodeSize);

        newNode->data = data;

        newNode->next = t->next;

        // newNode->prev = t->next->prev;

        t->next->prev = newNode;

        t->next = newNode;

        newNode->prev = t;

    }
}
void displayList(int rev, Node *ptr)
{
    if (ptr == NULL)
        return;

    Node *t = ptr;

    if (rev)
    {
        puts("\e[4;35m reverse order print \e[0;m \n");
        while (t != NULL)
        {
            printf("\e[1;34m data --> %14d| \e[0;m next \e[4;36m %14p \e[0;m previous \e[4;33m %14p\e[0;m \n\n", t->data, t->prev, t->next);
            t = t->prev;
        }
    }
    else
    {
        puts("\e[4;35m normal order print \e[0;m \n");
        while (t != NULL)
        {
            printf("\e[1;34m data --> %14d| \e[0;m next \e[4;36m %14p \e[0;m previous \e[4;33m %14p\e[0;m \n\n", t->data, t->next, t->prev);
            t = t->next;
        }
    }
}
