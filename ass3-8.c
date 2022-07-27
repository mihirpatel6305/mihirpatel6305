// leap year.
#include<stdio.h>
int main()
{   int y;
    printf("Enter the year:");
    scanf("%d",&y);
    if (y%4==0||y%400==0)
    {
        printf("The year is leap year");
    }else
        printf("The year is NOT leap year");
    
    return 0;
}
