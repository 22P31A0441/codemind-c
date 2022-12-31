#include<stdio.h>
int main()
{
    int x,y,c;
    scanf("%d%d",&x,&y);
    c=30*y;
    if(c<=x)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}