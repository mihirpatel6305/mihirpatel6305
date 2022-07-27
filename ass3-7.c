//root of quadratic equation.
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the value of coefficients a , b and c");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    printf("The value of D is %d\n",d);
    if (d>0)
    {
        printf("The roots are real and distinct");
    }else if (d==0)
    {
        printf("The roots are real and equal");   
    }else if (d<0)
    {
        printf("The roots are imaginary");   
    }
    return 0;
}
