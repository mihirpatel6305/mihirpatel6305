#include<stdio.h>
int main()
{   int a,b,c;
    printf("Enter the number");
    scanf("%d",&a);
    printf("Enter a digit:");
    scanf("%d",&b);
    c=a*10+b;
    printf("The resulting number is %d",c);
    return 0;
}