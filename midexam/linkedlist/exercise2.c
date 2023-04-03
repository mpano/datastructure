#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to find the maximum value from the linked list
int findMax(struct Node* head) {
    int maxVal = head->data;
    struct Node* curr = head;
    while(curr != NULL) {
        if(curr->data > maxVal) {
            maxVal = curr->data;
        }
        curr = curr->next;
    }
    return maxVal;
}

int main() {
    int n, data;
    printf("Input the number of nodes : ");
    scanf("%d", &n);

    // Creating the linked list
    struct Node* head = NULL;
    struct Node* prevNode = NULL;
    for(int i=0; i<n; i++) {
        printf("Input data for node %d : ", i+1);
        scanf("%d", &data);
        struct Node* newNode = createNode(data);
        if(head == NULL) {
            head = newNode;
        } else {
            prevNode->next = newNode;
            newNode->prev = prevNode;
        }
        prevNode = newNode;
    }

    // Printing the data in the linked list
    printf("Data entered in the list are: \n");
    struct Node* curr = head;
    while(curr != NULL) {
        printf("node %d: %d \n", curr->data);
        curr = curr->next;
    }

    // Finding the maximum value in the linked list
    int maxVal = findMax(head);
    printf("\nThe Maximum Value in the Linked List: %d", maxVal);
    return 0;
}