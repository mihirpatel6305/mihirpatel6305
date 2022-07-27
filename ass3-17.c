#include<stdio.h>
int main()
{   int a,b,c;
    printf("Enter value of triangle side a ,b and c");
    scanf("%d %d %d",&a,&b,&c);
    if (a+b>c && a+c>b && b+c>a)
    {
        printf("valid");
    }else
        printf("Not valid");
    
    return 0;
}
