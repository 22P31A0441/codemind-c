#include <stdio.h>
void main()
{
    int chk_year;
    {
    scanf("%d", &chk_year);
    if ((chk_year % 400) == 0)
        printf("True");
    else if ((chk_year % 100) == 0)
        printf("False");
    else if ((chk_year % 4) == 0)
        printf("True");
    else
        printf("False");
}
}