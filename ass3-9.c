#include<stdio.h>
 int main()
 {  int a,b,c;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number"); 
    scanf("%d",&b);
    printf("Enter third number");
    scanf("%d",&c);
    if (a>b)
    {
        printf("%d is greatest",a);
    }else if (b>c)
    {
        printf("%d is greatest",b);
    }else if (c>b)
    {
        printf("%d is greatest",c); 
    }
  printf("\nhello");
   if (a>c && b>c)
   {
    if (a==b)
        printf("\ngreatest number is %d",a);
   }
   if (b>a && c>a)
   {
    if (b==c)
        printf("\ngreatest number is %d",b);
   }
   if (a>b && c>b)
   {
    if (c==a)
        printf("\ngreatest number is %d",c);
   }
    if(a==b && b==c)
        printf("\ngreatest number is %d",a);
    return 0;
 }
 