#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
void solve(struct node* head){
    if(head==NULL)
        return;
    printf("%d",head->data);
    if(head->next !=NULL)
        solve(head->next->next);
    printf("%d",head->data);
}
void display(struct node* head){

    if(head != NULL){
        printf("\n data= %d",head->data);
        display(head->next);
    }

}
void fun(struct node* head){
    if(head==0)
        return;
    fun(head->next);
    printf("%d",head->data);
}
int counts(struct node* head){
    if(head != NULL){
        return counts(head->next ) +1;
    }else{
        return 0;
    }
}
int search(struct node* head,int key){

    int pos=1;
    while(head != NULL){
        if(head->data ==key){
            printf("the node found on position: %d",pos);
        }
        head= head->next;
        pos++;
    }
    printf("the number is not found");

}

int main(){

    int num,data,key;
    struct node* head=NULL;
    struct node* current=NULL;

    printf("enter number of node: ");
    scanf("%d",&num);

    for (int i = 0; i < num; ++i) {
        printf("enter node %d: ", i + 1);
        scanf("%d", &data);


        struct node* newone = (struct node *) malloc(sizeof(struct node));
        newone->data = data;
        newone->next = NULL;

        if (head == NULL) {
            head = newone;
            current = newone;
        } else {
            current->next = newone;
            current = newone;
        }
    }
    printf("the list contains: \n");
    display(head);
    printf("\nthe number of node is: %d", counts(head));
    printf("enter the number to search: ");
    scanf("%d",&key);
    search(head,key);
    printf("\n ");
    solve(head);
    printf("\n ");
    fun(head);

}