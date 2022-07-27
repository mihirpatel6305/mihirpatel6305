#include<stdio.h>
int main()
{       int s1,s2,s3,s4,s5;
        printf("Marks enter out of 100\n");
        printf("enter subject 1 marks\n");
        scanf("%d",&s1);
        printf("enter subject 2 marks\n");
        scanf("%d",&s2);
        printf("enter subject 3 marks\n");
        scanf("%d",&s3);
        printf("enter subject 4 marks\n");
        scanf("%d",&s4);
        printf("enter subject 5 marks\n");
        scanf("%d",&s5);
       if (s1>=33 && s2>=33 && s3>=33 && s4>=33 && s5>=33)
       {
        printf("you are pass");
       }else 
         printf("You are fail");
    
    return 0;
}
