#include <stdio.h>

int sum(int n){

    if(n==0){
        return n;
    } else{
        return (n%10) + sum(n/10);
    }
}

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("the sum of the digit in %d is %d",n, sum(n));
    return 0;
}