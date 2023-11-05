/**
 * Programmer: Syed Saif ur Rehman Shah.
 * Description: Using arrays to identify the max values of consecutive 3x3 matrices in any nxn matrix.
*/

#include <stdio.h>

int main()
{
    int n, max = 0, count;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    int joemama[n][n];
    printf("Enter the elements of array:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) scanf("%d", &joemama[i][j]);}
        
    int find[n-2][n-2];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            max = joemama[i][j];
            for(int k=0; k<3; k++)
            {
                for(int l=0; l<3; l++)
                {
                    if(max < joemama[i+k][j+l])
                    {
                        max = joemama[i+k][j+l];
                    }
                }
            }
            find[i][j] = max;
        }
    }
    printf("Generated MaxLocal Matrix: \n");
    for(int i=0; i<n-2; i++)
    {
        for(int j=0; j<n-2; j++)
        {
            printf("%d ", find[i][j]);
        }
        printf("\n");
    }
}
