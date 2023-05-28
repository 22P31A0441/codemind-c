#include<stdio.h>
int main()
{
    float n,sum=0;
    scanf("%f",&n);
    for(float i=1;i<=n;++i)
    {
        sum=(1/i)+sum;
    }
    printf("%.2f",sum);
}
