#include<stdio.h>
int main()
{   char x;
    printf("Enter character ");
    scanf("%c",&x);
    if (x>='A'&& x<='Z')
    {
        printf("Alphabet is in uppercase");
    }else if (x>='a'&& x<='z')
    {
        printf("Alphabet is in lowercase");   
    }else if(x>='0'&& x<='9')
        printf("character is number");
        else
        printf("special character");
    return 0;
}
