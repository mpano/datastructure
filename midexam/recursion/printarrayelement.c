#include <stdio.h>

void printarr(int a[],int n){
    if(n==1){
        printf("%d",a[0]);
    } else{
        printarr(a,n-1);
        printf("%d",a[n-1]);
    }
}

int main(){
    int a[]= {1,2,3,4,5,6,7,8};
    int n= sizeof(a)/ sizeof(a[0]);
    printf("the element of array are : ");
    printarr(a,n);
}