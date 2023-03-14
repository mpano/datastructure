#include <stdio.h>
void printnum(int n){
    if(n<=50){
        printf("%d",n);
        printnum(n+1);
    }
}
int main(){
    int n=1;
    printnum(n);
    return 0;
}