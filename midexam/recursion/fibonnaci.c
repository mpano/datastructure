#include <stdio.h>

int fibonnaci(int n){
    if(n==0 || n==1){
        return n;
    } else{
        return fibonnaci(n-1)+ fibonnaci(n-2);
    }
}
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    for (int i = 1; i < n; ++i) {
        printf("%d ", fibonnaci(i));
    }
}