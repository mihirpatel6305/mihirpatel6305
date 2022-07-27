#include<stdio.h>
int main()
{   int x;
    printf("Enter the number");
    scanf("%d",&x);
    if (x%7==0 || x%3==0)
    {
        printf("divisible by 7 or 3");
    }else
        printf("Not divisible by 7 or 3");
    
    return 0;
}
