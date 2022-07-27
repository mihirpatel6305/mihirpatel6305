// profit and loss.
#include<stdio.h>
int main()
{   float cost,sell,pp,profit,loss,lp;
    printf("enter cost of product");
    scanf("%f",&cost);
    printf("enter sell price of product");
    scanf("%f",&sell);
    if (sell>cost)
    {    profit=sell-cost;
         pp=profit/cost*100;
        printf("\nprofit is %.2f%%",pp);
    }else
    {
        loss=cost-sell;
        lp=loss/cost*100;
        printf("\nloss is %.2f%%",lp);

    }

    return 0;
}
