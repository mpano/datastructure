#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    int data;
    struct node *next;
}*first= NULL;

void create(int A[], int n){
    int i;
    struct node *t,*last;
    first=(struct node*)malloc(sizeof (struct node));
    first ->data=A[0];
    first -> next=NULL;
    last=first;

    for (i=1;i<n;i++){
        t=(struct node*)malloc(sizeof (struct node));
        t ->data=A[i];
        t ->next=NULL;
        last ->next=t;
        last=t;
    }
}

void Rdisplay(struct node *p){
    if (p!=NULL){

        printf("\t%d",p ->data);
        Rdisplay(p->next);
    }
}
int  Rsum(struct node *p){
    if(p==NULL) {
        return 0;
    }else {
        return Rsum(p->next) + p->data;
    }
}
int Rcount(struct node *p){

    if(p != NULL){
        return Rcount(p ->next) +1;
    } else{
        return 0;
    }
}
struct node * Rsearch(struct node *p, int key){
    if(p ==NULL)
        return NULL;
    if(key == p->data)
        return p;
    return Rsearch(p->next,key);
}

int main() {

    struct node *temp;
    int A[]={3,4,5,7,8,9,32};
    create(A, 7);
    Rdisplay(first);
    printf("\n\nthe sum is: %d \n", Rsum(first));
    printf("\n\nthe list element : %d \n", Rcount(first));
    temp= Rsearch(first,32);
    if(temp)
        printf("the number %d is found", temp->data);
    else
        printf("the number you are searching is not found");

    return 0;
}