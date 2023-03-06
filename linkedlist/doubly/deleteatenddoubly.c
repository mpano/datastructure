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

//Delete last node of the list
void pop_back(struct Node** head_ref) {
    if(*head_ref != NULL) {
        if((*head_ref)->next == NULL) {
            *head_ref = NULL;
        } else {
            struct Node* temp = *head_ref;
            while(temp->next->next != NULL)
                temp = temp->next;
            struct Node* lastNode = temp->next;
            temp->next = NULL;
            free(lastNode);
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

    //Add four elements in the list.
    push_back(&MyList, 10);
    push_back(&MyList, 20);
    push_back(&MyList, 30);
    push_back(&MyList, 40);
    PrintList(MyList);

    //Delete the last node
    pop_back(&MyList);

    PrintList(MyList);

    return 0;
}