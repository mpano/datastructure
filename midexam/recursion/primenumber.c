#include <stdio.h>

int primen(int n,int i){
    if(i==1){
        return 1;
    } else{
        if(n%i==0){
            return 0;
        } else {
            return primen(n,i-1);
        }
    }
}

int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(primen(n,n/2)==1){
        printf("%d is a prime number",n);
    } else {
        printf("%d is not a prime number", n);
    }
    return 0;
}