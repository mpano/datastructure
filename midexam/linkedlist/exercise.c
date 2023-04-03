#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};

struct node * create(int data){
    struct node* newone=(struct node*) malloc(sizeof (struct node));
    newone->data=data;
    newone->next=NULL;
    newone->prev=NULL;
    return newone;
}
void display(struct node* head){
    int i=1;
    if(head!=NULL){
        printf("\n data %d: %d",i,head->data);
        display(head->next);

    }
    i++;
}
void removeDuplicates(struct node* head) {
    struct node *current = head, *index = NULL, *temp = NULL;
    if(head == NULL) {
        return;
    }
    while(current != NULL) {
        index = current->next;
        while(index != NULL) {
            if(current->data == index->data) {
                temp = index;
                index = index->next;
                current->next = index;
                if(index != NULL) {
                    index->prev = current;
                }
                free(temp);
            }
            else {
                index = index->next;
            }
        }
        current = current->next;
    }
}
int maxim(struct node* head){
    int maxi=head->data;
    while(head!=NULL){
        if(head->data>maxi){
            maxi=head->data;
        }
        head= head->next;
    }
    return maxi;
}
void search(struct node* head, int key){
    int pos=1;
    while (head!=NULL){
        if(head->data==key){
            printf("the number found on position: %d",pos);
        }
        head=head->next;
        pos++;
    }

}



int main(){
    int num,data,key;
    printf("enter a number of node: ");
    scanf("%d",&num);

    printf("enter the of of node 1:");
    scanf("%d",&data);
    struct node* head= create(data);
    struct node* tail=head;

    for (int i = 1; i <num ; ++i) {
        printf("enter the of of node %d:",i+1);
        scanf("%d",&data);
        struct node* newnode= create(data);
        tail ->next= newnode;
        newnode ->prev= tail;
        tail=newnode;
    }
    display(head);
    printf("\n the maximum in list is: %d", maxim(head));
    printf("\n enter the number to search: ");
    scanf("%d",&key);
    search(head,key);
    removeDuplicates(head);
    display(head);
}