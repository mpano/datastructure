#include <stdio.h>
#include <stdlib.h>

//node structure
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
struct  Node *num1,*num2,*num3,*num4,*num5;
//Add new element at the end of the list
void push_back(struct Node** head_ref, int newElement) {
    struct Node *newNode, *temp;
    num1 = (struct Node*)malloc(sizeof(struct Node));
    num2 = (struct Node*)malloc(sizeof(struct Node));
    num3 = (struct Node*)malloc(sizeof(struct Node));
    num4 = (struct Node*)malloc(sizeof(struct Node));
    num5 = (struct Node*)malloc(sizeof(struct Node));
    newNode = (struct Node*)malloc(sizeof(struct Node));
    num1->data=2;
    num1->next = num2;
    num1->prev=NULL;

    num2->data=3;
    num2->next = num3;
    num2->prev=num1;

    num3->data=7;
    num3->next = num4;
    num3->prev=num2;

    num4->data=1;
    num4->next = num5;
    num4->prev=num3;

    num5->data=7;
    num5->next = newNode;
    num5->prev=num4;
    newNode->data = newElement;
    newNode->next = NULL;
    newNode->prev = num5;
    if(*head_ref == NULL) {
        *head_ref = num1;
    } else {
        temp = *head_ref;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

//Inserts a new element at the given position
void push_at(struct Node** head_ref, int newElement, int position) {
    struct Node *newNode, *temp;
    num1 = (struct Node*)malloc(sizeof(struct Node));
    num2 = (struct Node*)malloc(sizeof(struct Node));
    num3 = (struct Node*)malloc(sizeof(struct Node));
    num4 = (struct Node*)malloc(sizeof(struct Node));
    num5 = (struct Node*)malloc(sizeof(struct Node));
    newNode = (struct Node*)malloc(sizeof(struct Node));
    num1->data=2;
    num1->next = num2;
    num1->prev=NULL;

    num2->data=3;
    num2->next = num3;
    num2->prev=num1;

    num3->data=7;
    num3->next = num4;
    num3->prev=num2;

    num4->data=1;
    num4->next = num5;
    num4->prev=num3;

    num5->data=7;
    num5->next = newNode;
    num5->prev=num4;
    newNode->data = newElement;
    newNode->next = NULL;
    newNode->prev = num5;
    if(position < 1) {
        printf("\nposition should be >= 1.");
    } else if (position == 1) {
        newNode->next = *head_ref;
        (*head_ref)->prev = newNode;
        *head_ref = newNode;
    } else {
        temp = *head_ref;
        for(int i = 1; i < position-1; i++) {
            if(temp != NULL) {
                temp = temp->next;
            }
        }
        if(temp != NULL) {
            newNode->next = temp->next;
            newNode->prev = temp;
            temp->next = newNode;
            if(newNode->next != NULL)
                newNode->next->prev = newNode;
        } else {
            printf("\nThe previous node is null.");
        }
    }
}

//display the content of the list
void PrintList(struct Node* head_ref) {
    struct Node* temp = head_ref;
    if(head_ref != NULL) {
        printf("The list contains: ");
        while (temp != NULL) {
            printf("%i ",temp->data);
            temp = temp->next;
        }
        printf("\n");
    } else {
        printf("The list is empty.\n");
    }
}

// test the code
int main() {
    struct Node* MyList = NULL;

    //Add three elements in the list.
    push_back(&MyList, 10);
    push_back(&MyList, 20);
    push_back(&MyList, 30);
    PrintList(MyList);

    //Insert an element at position 2
    push_at(&MyList, 100, 3);
    PrintList(MyList);

    //Insert an element at position 1
    push_at(&MyList, 200, 1);
    PrintList(MyList);

    return 0;
}