#include<stdio.h>
int main()
{
    int x(int,int);
    printf("%d\n", x(1,1));
}
int x(int m,int n)
{
    if(m==0)return n+1;
    if(m>=1&&n==0)
        return x(m-1,1);
    else
        return x(m-1,x(m,n-1));
}
