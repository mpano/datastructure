#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
}*first;
struct node *second;
struct node *third;
struct  node *num1,*num2,*num3,*num4,*num5;
void Rdisplay(struct node* p){
    if (p!=NULL){

        printf("\t%d",p ->data);
        Rdisplay(p->next);
    }
}
struct node * Rsearch(struct node *p, int key){
    if(p ==NULL)
        return NULL;
    if(key == p->data)
        return p;
    return Rsearch(p->next,key);
}

int main()
{
    struct node *temp;
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    num1 = (struct Node*)malloc(sizeof(struct node));
    num2 = (struct Node*)malloc(sizeof(struct node));
    num3 = (struct Node*)malloc(sizeof(struct node));
    num4 = (struct Node*)malloc(sizeof(struct node));
    num5 = (struct Node*)malloc(sizeof(struct node));
//    first->data=20;
//    first->next=second;
//
//
//    second->data=30;
//    second->next=third;
//
//    third->data=50;
//    third->next=NULL;

    num1->data=2;
    num1->next = num2;
    num2->data=3;
    num2->next = num3;
    num3->data=7;
    num3->next = num4;
    num4->data=1;
    num4->next = num5;
    num5->data=7;
    num5->next = NULL;

    Rdisplay(num1);
    temp= Rsearch(first,50);
    if(temp)
        printf("\n\nthe number %d is found", temp->data);
    else
        printf("\n\nthe number you are searching is not found");

    return 0;

    return 0;
}

