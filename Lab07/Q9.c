/**
 * Programmer: Syed Saif ur Rehman Shah.
 * Description: Using 2D array to manage data.
*/

#include <stdio.h>

int main()
{
    int x,y,bt,total = 0,max = 0,branch_id,cell_id;
    printf("Enter the number of branches: ");
    scanf("%d", &x);
    printf("Enter the number of cell phones per branch: ");
    scanf("%d", &y);
    int data[x][y];
    for(int i=0; i<x; i++)
    {
        printf("\nBills of branch %d: ", i+1);
        for(int j=0; j<y; j++)
        {
            printf("\nEnter the bill for cell phone %d: ", j+1);
            scanf("%d", &data[i][j]);
            total += data[i][j];
            if(max < data[i][j])
            {
            max = data[i][j];
            branch_id = i+1;
            cell_id = j+1;
            }
        }
    } 
    printf("Total bill of all branches: %d\n", total);
    for(int i=0; i<x; i++)
    {
        bt = 0;
        for(int j=0; j<y; j++)
        {
            bt += data[i][j];
        }
        printf("Branch %d total: %d\n",i+1,bt);
    }
    printf("Branch where max bill arrived: %d\n", branch_id);
    printf("Branch and Mobile Phone IDs where bill is highest: Branch %d, Cell phone %d.\n",branch_id,cell_id);
}
