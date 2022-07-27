#include<stdio.h>
int main()
{   int a,b,c;
    printf("Enter the number");
    scanf("%d",&a);
    b=a/10;
    c=b*10;
    printf("When last digit of number is zero then number is %d",c);
    return 0;
}
