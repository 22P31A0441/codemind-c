#include<stdio.h>
int main()
{
    int n,ar[100],s=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
        s=s+ar[i];
    }
    printf("%d",s);
}