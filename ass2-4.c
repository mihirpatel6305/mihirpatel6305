// swaping value without third variable.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value a and b :");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("a=%d and b=%d", a, b);
    return 0;
}
