#include<stdio.h>
int main()
{   int m;
    printf("Enter month no:");
    scanf("%d",&m);
    switch (m)
    {
    case 1:
        printf("day-31");
        break;
    case 2:
        printf("day-29/28");
        break;
    case 3:
        printf("day-31");
        break;
    case 4:
        printf("day-30");
        break;
    case 5:
        printf("day-31");
        break;
    case 6:
        printf("day-30");
        break;
    case 7:
        printf("day-31");
        break;
    case 8:
        printf("day-31");
        break;
    case 9:
        printf("day-31");
        break;
    case 10:
        printf("day-31");
        break;    
    case 11:
        printf("day-30");
        break;   
    case 12:
        printf("day-31");
        break;                                           
    default:
        printf("Invalid Month no");
        break;
    }
    return 0;
}
