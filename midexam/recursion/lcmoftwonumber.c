#include <stdio.h>

int lcm(int a,int b,int max){
    if(max%a==0 && max%b==0){
        return max;
    } else{
        lcm(a,b,max+1);
    }
}
int main(){
    int a,b,max;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    max=(a>b) ? a:b;
    printf("the lcm of %d and %d is: %d",a,b, lcm(a,b,max));
}