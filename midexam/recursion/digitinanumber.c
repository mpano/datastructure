#include <stdio.h>

int countt(int n){

    if(n==0){
        return 0;
    }else{
        return 1 + countt(n/10);
    }
}

int main(){
    int n;
    printf("enter your number:");
    scanf("%d",&n);
    printf("the number of digit in %d are %d ",n, countt(n));
}