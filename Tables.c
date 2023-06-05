#include<stdio.h>
int main()
{
    int i,mn,mx;
    scanf("%d%d",&mn,&mx);
    for(i=1;i<=mx;i++)
    {
        if(i%2!=0)
        printf("%d x %d = %d
",mn,i,mn*i);
    }
}