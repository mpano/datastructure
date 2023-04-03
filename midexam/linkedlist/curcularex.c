#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node {
    int data;
    struct Node* next;
};

// Create the circular singly linked list
struct Node* createCircularLinkedList(int n) {
    struct Node *head, *prev, *curr;
    int i, data;

    head = NULL;

    // Create the first node
    printf("Input data for node 1: ");
    scanf("%d", &data);

    curr = (struct Node*)malloc(sizeof(struct Node));
    curr->data = data;
    head = curr;
    prev = curr;

    // Create the rest of the nodes
    for (i = 2; i <= n; i++) {
        printf("Input data for node %d: ", i);
        scanf("%d", &data);

        curr = (struct Node*)malloc(sizeof(struct Node));
        curr->data = data;
        prev->next = curr;
        prev = curr;
    }

    // Make the list circular
    prev->next = head;

    return head;
}

// Display the circular singly linked list
void displayCircularLinkedList(struct Node* head) {
    struct Node* curr;

    printf("Data entered in the list are: \n");
    printf("Data 1 = %d \n", head->data);

    curr = head->next;
    while (curr != head) {
        printf("Data %d = %d \n", curr->data);
        curr = curr->next;
    }
}

int main() {
    int n;
    struct Node* head;

    printf("Input the number of nodes: ");
    scanf("%d", &n);

    head = createCircularLinkedList(n);

    displayCircularLinkedList(head);

    return 0;
}
