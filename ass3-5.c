#include<stdio.h>
int main()
{  int x,y;
    printf("Enter the number:");
    scanf("%d",&x);
   if (x/1000==0 && x/100!=0)
   {
    printf("Three digit number");
   }
   else
   {
    printf("Not three digit number"); 
   }
    return 0;
}
