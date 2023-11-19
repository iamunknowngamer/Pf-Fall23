/* Programmer: Syed Saif ur Rehman Shah
* Description: GCD Using Loops.
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/
#include <stdio.h>

int GCD(int a,int b)
{   
    int gcd;
    if(a>b){
        if(a%b == 0) gcd = b;
        else{
            gcd = a;
            while(a>0){
                if(a%gcd==0 && b%gcd==0){
                    gcd = a;
                    break;
                }
                else a--;
            }
        }
    }
    if(b>a){
        if(b%a == 0) gcd = a;
        else{
            gcd = b;
            while(a>0){
                if(a%gcd==0 && b%gcd==0){
                    gcd = b;
                    break;
                }
                else b--;
            }
        }
    }
    printf("The GCD of %d and %d using loops is %d.",a,b,gcd);
}

int main()
{
    int a,b;
    printf("Enter the values for 'a' and 'b' : ");
    scanf("%d%d", &a, &b);
    GCD(a,b);
}


/* Programmer: Syed Saif ur Rehman Shah
* Description: GCD Using Recursions.
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/
#include <stdio.h>

int GCD(int a,int b)
{   
    if(b%a == 0) return a;
    if(a%b == 0) return b;
    else return GCD(a--, b%a);
}
int main()
{
    int a,b;
    printf("Enter the values for 'a' and 'b' : ");
    scanf("%d%d", &a, &b);
    int result = GCD(a,b);
    printf("The GCD of %d and %d is %d.",a,b,result);
}
