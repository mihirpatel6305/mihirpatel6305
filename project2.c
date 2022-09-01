#include <stdio.h>
#include<stdlib.h>

void display();
void friend();
void ass0(int );
void assx(int );
int check();
void smartc();
int defence();
int helpwin();
void evil();
int defence_evil();


int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int main()
{  
    
     int choice;
    char name[30];
     display();
     printf("Enter your name:");
     gets(name);
     printf("\nhello %s welcome in TIC TAC TOE.\n",name);

    printf("1.want to play with smart computer\n");
    printf("2.want to play with evil computer\n");
    printf("3.want to play with friend\n");
    printf("4.exit\n");
    printf("Enter your choice:\n");
     scanf("%d",&choice);
     switch (choice)
     {
     case 1:
        smartc();
        break;
      case 2:
        evil();
        break;
      case 3:
        friend();
        break;
      case 4:
        break;
     default:
       printf("Enter write choice");
        break;
     }
  
    return 0;
  }  

void display()
{
   
    system("cls");
    printf("^^^^^^^^^^^^^^^^^^^TIC TAC TOE^^^^^^^^^^^^^^^^^^^");
    printf("\n");
    printf("-------------");
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {  
            if (a[i][j]==120)
            {
            printf("| %c ", a[i][j]);
            }
            else
            {
            printf("| %d ", a[i][j]);
            }
            
        }
        printf("|");
        printf("\n");
        printf("-------------");
        printf("\n");

    }
}
void friend()
{   int m,n,temp=0;
    printf("player 1:0\n");
    printf("player 2:x");
    while (1)
    {  
    
    printf("\nplayer 1\n");
    scanf("%d",&m);
    ass0(m);
    display();
    temp=check();
     if(temp==1)
      {
        break; 
      }
    printf("player 2\n");
    scanf("%d",&n);
    assx(n);
    display();
    temp=check();
     if(temp==1)
      {
        break; 
      }
    }
    
}
void ass0(int m)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j]==m)
            {
                a[i][j]=0;
            }
            
        }   
    }
}
void assx(int n)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j]==n)
            {
                a[i][j]='x';
            }
            
        }  
    }
}
int check()
{
    int hor0=0,var0=0,diagonal0=0,ved=0;
   int horx=0,varx=0,diagonalx=0,mihir=0;
    
    //check for 0
   for (int i = 0; i < 3; i++)
        {  
            hor0=0,var0=0;
            for(int j=0; j<3; j++)
            {
               if (a[i][j]==0)
               {
                  hor0++;
               }
            }
            if (hor0==3)
            {
                printf("player 1 win");
                return 1;
            }
            for(int j=0; j<3; j++)
            {
               if (a[j][i]==0)
               {
                  var0++;
               }
            }
            if (var0==3)
            {
                printf("player 1 win");
                return 1;
            }
          
            
        }
            
        diagonal0=0;
    for(int i=0;i<3;i++)
        { 
            if (a[i][i]==0)
            {   
                diagonal0++;
            }
            if (diagonal0==3)
            {
                printf("player 1 win");
                return 1;
            }
            
        }
       ved=0;
        for (int i = 0,j=2; i < 3; i++,j--)
        {
            
            if (a[i][j]==0)
            {   
                ved++;
            }
            if (ved==3)
            {
                printf("player 1 win");
                return 1;
            }
        }

        // check for x.
       // int horx,varx,diagonalx,mihir;
        for (int i = 0; i < 3; i++)
        {  
            horx=0,varx=0;
            for(int j=0; j<3; j++)
            {
               if (a[i][j]=='x')
               {
                  horx++;
               }
            }
            if (horx==3)
            {
                printf("player 2 win");
                return 1;
            }
            for(int j=0; j<3; j++)
            {
               if (a[j][i]=='x')
               {
                  varx++;
               }
            }
            if (varx==3)
            {
                printf("player 2 win");
                return 1;
            }
          
             
        }
        diagonalx=0;
        for (int i = 0; i < 3; i++)
        {   
            if (a[i][i]=='x')
            {   
                diagonalx++;
            }
            if (diagonalx==3)
            {
                printf("player 2 win");
                return 1;
            }
            
        }
        mihir=0;
        for (int i = 0,j=2; i < 3; i++,j--)
        {
            
            if (a[i][j]=='x')
            {   
                mihir++;
            }
            if (mihir==3)
            {
                printf("player 2 win");
                return 1;
            }
        }
        
        int pen=0;
  for (int i = 0; i < 3; i++)
  {  
      for (int j = 0; j < 3; j++)
      {
         if (a[i][j]==0 || a[i][j]=='x')
            pen++;
      }
  }
  if (pen==9)
  {
    printf("draw match");
    return 1;
  }
}
void smartc()
{
     printf("you are plyer 1\n");
     printf("computer is player 2");
     int m,n,temp=0,temp1=0;
    while (1)
    {  
    
    printf("\n Your step\n");
    scanf("%d",&m);
    ass0(m);
    display();
    temp=check();
     if(temp==1)
      {
        break; 
      }
    printf("smart computer\n");
    n=defence();
    temp1=helpwin();
    if (temp1!=0)
    {
        n=helpwin();
    }
    
    assx(n);
    display();
    temp=check();
     if(temp==1)
      {
        break; 
      }
    }

}
int defence()
{
    for (int i = 0; i < 3; i++)
    {
        if (a[i][0]==a[i][1])
            {   
                if(a[i][2]!=0 && a[i][2]!='x')
                 {
                       return a[i][2];
                 } 
            }
            else if (a[i][0]==a[i][2])
            { 
                if(a[i][1]!=0 && a[i][1]!='x')
                {
                    return a[i][1];
                } 
            }else if (a[i][1]==a[i][2])
            { 
                if(a[i][0]!=0 && a[i][0]!='x')
                 {
                    return a[i][0];
                 } 
            }
    }
    for (int j = 0; j < 3; j++)
    {
        if (a[0][j]==a[1][j])
            {  if(a[2][j]!=0 && a[2][j]!='x')
                    {
                      return a[2][j];
                    } 
            }
            else if (a[0][j]==a[2][j])
            {       
                     if(a[1][j]!=0 && a[1][j]!='x')
                    {
                      return a[1][j];
                    } 
            }else if (a[1][j]==a[2][j])
            {           
                    if(a[0][j]!=0 && a[0][j]!='x')
                   {
                      return a[0][j];
                    } 
                return a[0][j];
            }
    }
    // diagonal
    if (a[0][0]==a[1][1])
    {
        if(a[2][2]!=0 && a[2][2]!='x')
       {
        return a[2][2];
       } 
    }else if (a[0][0]==a[2][2])
    {   if(a[1][1]!=0 && a[1][1]!='x')
       {
        return a[1][1];
       } 
    }else if (a[1][1]==a[2][2])
    {
        if(a[0][0]!=0 && a[0][0]!='x')
       {
        return a[0][0];
       } 
    }    
    //diagonal
     if (a[0][2]==a[1][1])
    { if(a[2][0]!=0 && a[2][0]!='x')
       {
        return a[2][0];
       } 
    }else if (a[0][2]==a[2][0])
    {
        if(a[1][1]!=0 && a[1][1]!='x')
       {
        return a[1][1];
       } 
    }else if (a[1][1]==a[2][0])
    {
        if(a[0][2]!=0 && a[0][2]!='x')
       {
        return a[0][2];
       } 
    }
    //for computer first step.//coding for when above all codition are false.
    if (a[1][1]!=0 && a[1][1]!='x')
    {
         return 5;
    }else if (a[2][0]!=0 && a[2][0]!='x')
    {
        return 7;
    }else if (a[2][2]!=0 && a[2][2]!='x')
    {
        return 9;
    }
    
    
}
int helpwin()
{
     for (int i = 0; i < 3; i++)
    {
        if (a[i][0]=='x' && a[i][1]=='x')
            {   
                if(a[i][2]!=0 && a[i][2]!='x')
                 {
                       return a[i][2];
                 } 
            }
            else if (a[i][0]=='x' && a[i][2]=='x')
            { 
                if(a[i][1]!=0 && a[i][1]!='x')
                {
                    return a[i][1];
                } 
            }else if (a[i][1]=='x'&& a[i][2]=='x')
            { 
                if(a[i][0]!=0 && a[i][0]!='x')
                 {
                    return a[i][0];
                 } 
            }
    }
    for (int j = 0; j < 3; j++)
    {
        if (a[0][j]=='x' && a[1][j]=='x')
            {  if(a[2][j]!=0 && a[2][j]!='x')
                    {
                      return a[2][j];
                    } 
            }
            else if (a[0][j]=='x'&& a[2][j]=='x')
            {       
                     if(a[1][j]!=0 && a[1][j]!='x')
                    {
                      return a[1][j];
                    } 
            }else if (a[1][j]=='x'&& a[2][j]=='x')
            {           
                    if(a[0][j]!=0 && a[0][j]!='x')
                   {
                      return a[0][j];
                    } 
                return a[0][j];
            }
    }
    // diagonal
    if (a[0][0]=='x' && a[1][1]=='x')
    {
        if(a[2][2]!=0 && a[2][2]!='x')
       {
        return a[2][2];
       } 
    }else if (a[0][0]=='x' && a[2][2]=='x')
    {   if(a[1][1]!=0 && a[1][1]!='x')
       {
        return a[1][1];
       } 
    }else if (a[1][1]=='x' && a[2][2]=='x')
    {
        if(a[0][0]!=0 && a[0][0]!='x')
       {
        return a[0][0];
       } 
    }    
    //diagonal
     if (a[0][2]=='x' && a[1][1]=='x')
    { if(a[2][0]!=0 && a[2][0]!='x')
       {
        return a[2][0];
       } 
    }else if (a[0][2]=='x' && a[2][0]=='x')
    {
        if(a[1][1]!=0 && a[1][1]!='x')
       {
        return a[1][1];
       } 
    }else if (a[1][1]=='x' && a[2][0]=='x')
    {
        if(a[0][2]!=0 && a[0][2]!='x')
       {
        return a[0][2];
       } 
    }  
    return 0;  //When situation is not wining for computer.
}
void evil()
{
     printf("you are plyer 1\n");
     printf("computer is player 2");
     int m,n,temp=0,temp1=0;
    while (1)
    {  
    printf("evil computer\n");
    n=defence_evil();
    temp1=helpwin();
    if (temp1!=0)
    {
        n=helpwin();
    }
    
    assx(n);
    display();
    temp=check();
     if(temp==1)
      {
        break; 
      }
   //for player 
  printf("\n Your step:\n");
    scanf("%d",&m);
    ass0(m);
    display();
    temp=check();
     if(temp==1)
      {
        break; 
      }
}
}
int defence_evil() 
{
     for (int i = 0; i < 3; i++)
    {
        if (a[i][0]==a[i][1])
            {   
                if(a[i][2]!=0 && a[i][2]!='x')
                 {
                       return a[i][2];
                 } 
            }
            else if (a[i][0]==a[i][2])
            { 
                if(a[i][1]!=0 && a[i][1]!='x')
                {
                    return a[i][1];
                } 
            }else if (a[i][1]==a[i][2])
            { 
                if(a[i][0]!=0 && a[i][0]!='x')
                 {
                    return a[i][0];
                 } 
            }
    }
    for (int j = 0; j < 3; j++)
    {
        if (a[0][j]==a[1][j])
            {  if(a[2][j]!=0 && a[2][j]!='x')
                    {
                      return a[2][j];
                    } 
            }
            else if (a[0][j]==a[2][j])
            {       
                     if(a[1][j]!=0 && a[1][j]!='x')
                    {
                      return a[1][j];
                    } 
            }else if (a[1][j]==a[2][j])
            {           
                    if(a[0][j]!=0 && a[0][j]!='x')
                   {
                      return a[0][j];
                    } 
                return a[0][j];
            }
    }
    // diagonal
    if (a[0][0]==a[1][1])
    {
        if(a[2][2]!=0 && a[2][2]!='x')
       {
        return a[2][2];
       } 
    }else if (a[0][0]==a[2][2])
    {   if(a[1][1]!=0 && a[1][1]!='x')
       {
        return a[1][1];
       } 
    }else if (a[1][1]==a[2][2])
    {
        if(a[0][0]!=0 && a[0][0]!='x')
       {
        return a[0][0];
       } 
    }    
    //diagonal
     if (a[0][2]==a[1][1])
    { if(a[2][0]!=0 && a[2][0]!='x')
       {
        return a[2][0];
       } 
    }else if (a[0][2]==a[2][0])
    {
        if(a[1][1]!=0 && a[1][1]!='x')
       {
        return a[1][1];
       } 
    }else if (a[1][1]==a[2][0])
    {
        if(a[0][2]!=0 && a[0][2]!='x')
       {
        return a[0][2];
       } 
    }
    //for computer first step.//coding for when above all codition are false.
    if (a[0][0]!=0 && a[0][0]!='x')
    {
         return 1;
    }else if (a[2][0]!=0 && a[2][0]!='x')
    {
        return 7;
    }else if (a[2][2]!=0 && a[2][2]!='x')
    {
        return 9;
    }else if (a[0][2]!=0 && a[0][2]!='x')
    {
        return 3;
    }
}
