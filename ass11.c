#include<stdio.h>
#include<conio.h>
/*int main()
{ int h,m;
     printf("Enter the time:");
     scanf("%d:%d",&h,&m);
   
     printf("\n%d hour and %d minute",h,m);
    
    return 0;
}*/
int main()
{
  int n,m,v=0;
  printf("Enter any number:");
  scanf("%d",&n);
  while (n>0)
  {
    m=n%10;
    v=v*10+m;
    n=n/10;
  }
  printf("%d",v);
  return 0;
}

