// swaping the value.
#include<stdio.h>
#include<conio.h>
int main()
{  int a,b,c;
     printf("enter two no a and b :");
     scanf("%d %d",&a,&b);
     c=a;
     a=b;
     b=c;
     printf("\nAfter swaping ");
     printf("\na=%d",a);
     printf("\nb=%d",b);
    
     return 0;
}


