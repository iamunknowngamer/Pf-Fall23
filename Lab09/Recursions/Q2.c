#include <stdio.h>

int multiply(int a, int b)
{
    if(a==0 || b==0) return 0;
    else return a + multiply(a, b-1);
}

int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);
    multiply(a,b);
    printf("The product of %d and %d is: %d", a, b, multiply(a,b));
}
