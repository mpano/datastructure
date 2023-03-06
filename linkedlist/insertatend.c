#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct  Node *num1,*num2,*num3,*num4,*num5;

void create(struct Node** head_ref, int newElement) {
    struct Node *newNode, *temp;
    num1 = (struct Node*)malloc(sizeof(struct Node));
    num2 = (struct Node*)malloc(sizeof(struct Node));
    num3 = (struct Node*)malloc(sizeof(struct Node));
    num4 = (struct Node*)malloc(sizeof(struct Node));
    num5 = (struct Node*)malloc(sizeof(struct Node));
    newNode = (struct Node*)malloc(sizeof(struct Node));
    num1->data=2;
    num1->next = num2;
    num2->data=3;
    num2->next = num3;
    num3->data=7;
    num3->next = num4;
    num4->data=1;
    num4->next = num5;
    num5->data=7;
    num5->next = newNode;
    newNode->data = newElement;
    newNode->next = NULL;
    if(*head_ref == NULL) {
        *head_ref = num1;
    } else {
        temp = *head_ref;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
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

    struct Node* MyList ;

    //Add three elements at the end of the list.
    create(&MyList, 10);
    create(&MyList, 20);
    create(&MyList, 30);
    PrintList(MyList);

    return 0;
}