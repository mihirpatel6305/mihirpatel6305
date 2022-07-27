#include<stdio.h> 
int main()
{
    int a,b,c,d,e;
    printf("Enter three digit number");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    d=c%10;
    e=c/10;
    printf("sum of all digit is %d",d+b+e);
    return 0;
}
