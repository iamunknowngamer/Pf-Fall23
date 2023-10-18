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
            scanf("%d",&t[j][i]);
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(m[i][j]==t[i][j])
            {
                printf("The matrix %d is Symmetric", m[i][j]);
            }
            else
            {
                printf("The matrix %d is not Symmetric", m[i][j]);
            }
        }
    }
}//end
