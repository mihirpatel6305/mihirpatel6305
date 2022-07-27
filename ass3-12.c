#include<stdio.h>
int main(int argc, char const *argv[])
{   char x;
    printf("Enter alphabet");
    scanf("%c",&x);
    if (x>='A'&& x<='Z')
    {

        printf("Alphabet is in uppercase");
    }else if (x>='a'&& x<='z')
    {
        printf("Alphabet is in lowercase");   
    }else
        printf("Entered charactor is not alphabet");
    
    return 0;
}
