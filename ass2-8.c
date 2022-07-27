#include<stdio.h>
int main()
{  int a,b;
    printf("Enter the no:");
    scanf("%d",&a);
    b=a&1;
     if (b==0)
     {
        printf("number is even");
     }else
     {
        printf("number is odd");
        
     }
     
    return 0;
}
