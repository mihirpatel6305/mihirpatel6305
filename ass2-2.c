#include<stdio.h>
#include<conio.h>
int main()
{  int a,b;
     printf("enter the no:");
    scanf("%d",&a);
    b=(a/10);
    if (b!=0)
    {
        printf("without last digit number is %d",b);
    }else
    {
         printf("without last digit number is %d",a);
    }

    return 0;
}
