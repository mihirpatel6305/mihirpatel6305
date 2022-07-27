#include<stdio.h>
 int main()
 {  int x;
    printf("Enter the number");
    scanf("%d",&x);
    if (x>0)
    {
        printf("The number is positive");
    }else if (x==0)
    {
        printf("The number is zero");
    }else
        printf("The number is negative");
    
    return 0;
 }
 