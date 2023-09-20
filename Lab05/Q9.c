#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    int a,b,c;
    float D,Root1,Root2;
    printf("Enter the values of a , b and c of a quadratic equation: \n");
    scanf("%d%d%d",&a,&b,&c);
    D = (b*b) - (4*a*c);
    printf("\nThe discriminant is : %f\n", D);
    
    if (D>=0)
    {
        printf("\nThe Roots are Real, Calculating the roots... please wait..\n");
        Root1 = (-b - sqrt(D))/ (2*a);
        Root2 = (-b + sqrt(D))/ (2*a);
        printf("\nThe Roots are : %f %f", Root1, Root2);
    }
    else
    {
        printf("\nThe Roots are Complex!!\n");
    }

}//end

