#include<stdio.h>
 int main()
{
    char cletter;
    scanf("%c",&cletter);
    if(cletter=='a'||cletter=='e'||cletter=='i'||cletter=='o'||cletter=='u'||cletter=='A'||cletter=='E'||cletter=='I'||cletter=='O'||cletter=='U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}