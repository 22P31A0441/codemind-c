#include<stdio.h>
int main()
{
    int n,r=0,rev=0;
    scanf("%d",&n);
    while(n!=0)
    {
    r=n%10;
    rev=(rev*10)+r;
    n/=10;
    }
    printf("%d",rev);
}