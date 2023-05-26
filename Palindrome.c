#include<stdio.h>
int main()
{
    int num,r,temp,sum=0;
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        r=num%10;
        num=num/10;
        sum=(sum*10)+r;
    }
    if(temp == sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}