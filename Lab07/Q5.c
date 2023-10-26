/* Programmer: Syed Saif ur Rehman Shah
* Date: 10/10/2023
* Description: This is the code for Question 5
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/tree/main/Lab03
*/

#include <stdio.h>

void cap(int n)
{
    for(int i=0; i<3; i++ )  
    {   
        for(int j=0; j<n-1; j++)
        {
            printf(" ");
        }
        for(int k=0; k<n; k++)  
        {  
            	printf("*");  
        }  
        printf("\n");  
    }
    printf(" ");
    for(int owo=0; owo<2*n+1; owo++)
    {
        printf("*");
    }
    printf("\n");
}//end the cap

void face(int n)
{
    for(int i=0; i<2*n; i++)
    {
        switch (i)
        {
            case 0:
                for(int j=1; j<n; j++) printf(" ");
                printf("*");
                for(int j=2; j<n; j++) printf(" ");
                printf("*\n"); break;
            case 1:
                for(int k=0; k<n+1; k++) printf(" ");
                printf("|\n"); break;
            case 2:
                for(int owo=0; owo<n; owo++) printf(" ");
                printf("\\_/\n\n"); break;
            case 3:
                for(int uwu=0; uwu<n; uwu++) printf(" ");
                printf("| |\n");
        }
    }
}//end face

void body(int n)
{
    for(int i=0; i<3*n-2; i++) printf("*");
    printf("\n");
    for(int j=0; j<n-1; j++)
    {
        printf("**  ");
        for(int k=0; k<n; k++)
        {
            printf("*");
        }
        printf("  **\n");
    }
    for(int owo=0; owo<n-1; owo++) printf(" ");
    for(int uwu=0; uwu<n; uwu++) printf("*");
}//end body

void legs(int n)
{
    printf("\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++) printf(" ");
        printf("** **\n");
    }
    for(int k=0; k<n-3; k++)
    {
        printf(" ");
        for(int owo=0; owo<n; owo++) printf("*");
    }
}//end legs
    
int main()
{
    int n=5;
    cap(n);
    face(n);
    body(n);
    legs(n);
}//end main
