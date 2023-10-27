/* Programmer: Syed Saif ur Rehman Shah
* Date: 10/10/2023
* Description: This is the code for Question 1
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/

#include <stdio.h>

int main() 
{
    int N,n;
    printf("Enter the number of batsmen: ");
    scanf("%d", &N);
    
    printf("Enter the number of innings: ");
    scanf("%d", &n);
    
    int performance[N][n];
    
    for(int i=0; i<N; i++){
        int total = 0, max = 0, c = 0, hc = 0; float average = 0;
        for(int j=0; j<n; j++){
            printf("\nEnter the score of innings(%d) of batsmen(%d): ", j+1, i+1);
            scanf("%d", &performance[i][j]);
            
            total += performance[i][j];
            
            if(performance[i][j] > max) max = performance[i][j];
            
            if(performance[i][j]>=50) hc++;
            else if(performance[i][j]>=100) c++;
        }
        average = total/n;
        printf("Total Runs: %d\nHighest Score: %d\nAverage: %.2f\nHalf Centuries: %d\nCenturies: %d", total, max, average, hc, c);
    }
}
