#include<stdio.h>
#include<conio.h>
int main()
{  int d,m,y;
     printf("Enter the date in DD/MM/YYYY format:");
   scanf("%d/%d/%d",&d,&m,&y);
   printf("%d/%d/%d",d,m,y);
   printf("\nday-%d,month-%d,year-%d",d,m,y);
    return 0;
}
