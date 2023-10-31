/* Programmer: Syed Saif ur Rehman Shah
* Description: This is the code for Question 4
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/tree/main/Lab03
*/

#include <stdio.h>
int isSymmetric(int m[10][10], int c, int r)
{
    int t[10][10];
    
    for(int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            t[j][i] = m[i][j];
        }
    }
    
    for(int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            if(t[i][j]!=m[i][j])
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int m[10][10];
    int c,r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    
    printf("Enter the matrix: \n");
    for(int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    
    if(isSymmetric(m,r,c))
    {
        printf("The matrix is symmetric\n");
        for(int i=0; i<r; i++)
        {
            for (int j=0; j<c; j++)
            {
                printf("%d ", m[i][j]);
            }
            printf("\n");
        }
    }
    else 
    {
        printf("The matrix is not symmetric\n");
        for(int i=0; i<r; i++)
        {
            for (int j=0; j<c; j++)
            {
                printf("%d ", m[i][j]);
            }
            printf("\n");
        }
    }
}
