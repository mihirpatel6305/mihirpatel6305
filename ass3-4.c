// even or odd. 
#include<stdio.h>
 int main()
 {   int x,y;
   printf("Enter a number");
   scanf("%d",&x);
   y=x&1;
   if (y==0)
   {
    printf("number is even");
   }
   else
   {
    printf("number is odd");
   }

    return 0;
 }
 