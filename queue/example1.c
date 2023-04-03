#include <stdio.h>
#include <stdbool.h>
void display();
int max;
int items[10];
  int rear=-1, front=-1, data;
 bool isFull(){
     if (rear==max-1){
         return true;
     }
     else {
         return false;
     }
 }

 bool isEmpty(){
     if(front==-1){
         return true;
     }
     else{
         return false;
     }
 }

 void enQueue( ){
     if(isFull()){
         printf("The Queue is full");
     }
     else{
         printf("Enter an element you want to enQueue");
         scanf("%d", &data);
         if(rear==-1){
             front=0;
             rear++;
             items[rear]=data;
             printf("Item inserted");
         }
         else{
             rear++;
             items[rear]=data;
             printf("Item inserted");
         }
     }
 }

 void deQueue(){
     if(isEmpty()){
         printf("The Queue is Empty");
     }
     else{
         printf("You deleted %d", items[front]);
         front++;
         if(front>rear){
             rear=front=-1;
         }

     }
 }

 int main(){
     int choice;
     printf("Enter maximum number of elements of your array..\t");
     scanf("%d", &max);
     printf("Enter 1 to EnQueue \n 2. to DeQueue \n3. To Display Queue elements.\n");
     scanf("%d", &choice);
     switch(choice){
         case 1:
             enQueue();
             break;
         case 2:
             deQueue();
             break;
         case 3:
             //display();
             break;
         default:
             printf("Invalid choice");
     }
     return 0;
 }