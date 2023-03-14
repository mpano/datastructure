#include <stdio.h>

int sums(int n){
    if(n==1){
        return 1;
    } else{
        return n + sums(n-1);
    }
}
int main(){
    int n;
    printf("enter your number: ");
    scanf("%d",&n);
    printf("the sum from 1 up to %d is: %d ",n, sums(n));
}