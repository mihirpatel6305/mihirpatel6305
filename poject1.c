#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void display(int a[][4]);
void random(int a[][4]);
void swap(int a[][4], int, int *, int *);
void rule();
int main()

{
  int i = 3, j = 3;
  int *m, *n;
  int b;
  char str[20];
  printf("Enter your name:");
   gets(str);
  printf("\nhello %s\n",str);
  m = &i;
  n = &j;
  int a[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, ' '};
  int y[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, ' '};
  a[i][j] = ' ';
  printf("make puzzle in this order\n");
  display(a);
  system("color e");
  rule();
  random(a);
  display(a);
  printf("\nyour maximum move is 40\n");
  printf("start game\n");
  int x = 1;
  while (x <= 40)
  {
    a[i][j] = ' ';
    scanf("%d", &b);
    if (b == 5)
    {
      printf("Thank you");
      break;
    }

    swap(a, b, m, n);
    display(a);

    printf("\nremaining move:%d\n", 40 - x);
    if (win(a,y))
    {
        printf("You are Win");
        break;
    }
    x++;
  }
  
  return 0;
}
void rule()
{
  printf("\npress 2 to move element down\n");
  printf("press 8 to move element up\n");
  printf("press 6 to move element right\n");
  printf("press 4 to move element left\n");
  printf("Enter 5 to Exit game:\n");
}
void random(int a[][4])
{
  int upper = 3, lower = 0, i, j, number, temp;
  srand(time(NULL));

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      number = (rand() % (upper - lower + 1)) + lower;
      if (a[number][3] == ' ')
      {
        break;
      }
      if (a[i][j] == ' ')
      {
        break;
      }

      temp = a[i][j];
      a[i][j] = a[i][number];
      a[i][number] = temp;
      temp = a[number][j];
      a[number][j] = a[i][j];
      a[i][j] = temp;
    }
  }
}
void display(int a[][4])
{
  printf("\n");

  for (int i = 0; i < 18; i++)
  {

    printf("-");
  }
  printf("\n");
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {

      printf("|");
      if (a[i][j] == ' ')
      {
        printf(" %c ", a[i][j]);
      }
      else if (a[i][j] / 10 == 0)
      {
        printf(" %d ", a[i][j]);
      }
      else
      {
        printf(" %d", a[i][j]);
      }
    }
    printf("|");
    printf("\n");
  }

  for (int i = 0; i < 18; i++)
  {
    printf("-");
  }
}
void swap(int a[][4], int b, int *m, int *n)
{
  int t;
  int i = *m;
  int j = *n;

  if (b == 6)
  {
    t = a[i][j];
    a[i][j] = a[i][j - 1];
    a[i][j - 1] = t;

    (*n)--;
  }
  if (b == 4)
  {
    t = a[i][j];
    a[i][j] = a[i][j + 1];
    a[i][j + 1] = t;

    (*n)++;
  }
  if (b == 2)
  {
    t = a[i][j];
    a[i][j] = a[i - 1][j];
    a[i - 1][j] = t;

    (*m)--;
  }
  if (b == 8)
  {
    t = a[i][j];
    a[i][j] = a[i + 1][j];
    a[i + 1][j] = t;

    (*m)++;
  }
}
int win(int a[4][4] , int y[4][4])
{ int i,j,flag=0;
  for (int i = 0; i < 4; i++)
  {  
     for (int j = 0; j < 4; j++)
     {
        if (a[i][j]!=y[i][j])
        return 0;
     }
  } 
   return 1;
}