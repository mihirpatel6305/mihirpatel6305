#include<stdio.h>
int main()
{   int a,b,c,d;
    printf("Enter the number:");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    d=c+b*100;
    printf("The number after roteting digit is %d",d);

    return 0;
}

