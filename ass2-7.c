#include<stdio.h>
int main()
{  
   int a=8,count=0,b;
   printf("hello\n");
   printf("Enter the number:");
   scanf("%d",&a);
   b=a&1;
   while (b==0)
   {  
      count++;
      a>>1;
      b=a&1;
   }
   printf("first 1 from LSB side is %d",count);
    return 0;
}
