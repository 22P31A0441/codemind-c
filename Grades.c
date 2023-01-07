#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,per;
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    per=(s1+s2+s3+s4+s5)/5.0;
    if(per>=90)
    {
        printf("Grade A
");
    }
    else if(per>=80)
    {
        printf("Grade B
");
    }
    else if(per>=70)
    {
        printf("Grade C
");
    }
    else if(per>=60)
    {
        printf("Grade D
");
    }
    else if(per>=40)
    {
        printf("Grade E
");
    }
    else if(per<40)
    {
        printf("Grade F
");
    }
}
    
    
    
