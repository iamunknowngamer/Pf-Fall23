/* Programmer: Syed Saif ur Rehman Shah
* Date: 10/10/2023
* Description: This is the code for Question 4
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/tree/main/Lab03
*/

#include <stdio.h>

int main()
{
    int m[3][3], t[3][3];
    printf("Enter the elements of the matrix (3x3) separated by space: ");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            t[i][j] = m[j][i];
        }
    }
    int S;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(m[i][j]==t[i][j])
            {
                S = 1;
            }
            else
            {
                S = 0;
            }
        }
    }
    if(S==1)
    {
        printf("The given array is symmetric\n");
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                printf("%d ", m[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("The given array is symmetric\n");
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                printf("%d ", m[i][j]);
            }
            printf("\n");
        }
    }
}//end
