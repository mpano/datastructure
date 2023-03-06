#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int getCurrSize (struct Node *node)
{
    int size = 0;

    while (node != NULL)
    {
        node = node->next;
        size++;
    }
    return size;
}

void insertPosition (int pos, int data, struct Node **head)
{
    int size = getCurrSize (*head);

    struct Node *newNode = (struct Node *) malloc (sizeof (struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (pos < 0 || pos > size)
        printf ("Invalid position to insert\n");
    else if (pos == 0)
    {
        newNode->next = *head;
        *head = newNode;
    }

    else
    {
        struct Node *temp = *head;
        while (--pos)
            temp = temp->next;
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void display (struct Node *node)
{
    printf ("Linked List : ");
    while (node != NULL)
    {
        printf ("%d ", node->data);
        node = node->next;
    }
    printf ("\n");
}

int main ()
{
    struct Node *head = NULL;
    struct Node *num2 = NULL;
    struct Node *num3 = NULL;
    struct Node *num4 = NULL;
    struct Node *num5 = NULL;
    head = (struct Node *) malloc (sizeof (struct Node));

    num2 = (struct Node *) malloc (sizeof (struct Node));
    num3 = (struct Node *) malloc (sizeof (struct Node));
    num4 = (struct Node *) malloc (sizeof (struct Node));
    num5 = (struct Node *) malloc (sizeof (struct Node));
    head->data=2;
    head->next = num2;
    num2->data=3;
    num2->next = num3;
    num3->data=7;
    num3->next = num4;
    num4->data=1;
    num4->next = num5;
    num5->data=7;
    num5->next = NULL;
    display (head);
    insertPosition (1, 15, &head);
    display(head);
    insertPosition (3, 25, &head);
    display (head);
    return 0;
}