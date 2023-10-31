/**
 * Programmer: Syed Saif ur Rehman Shah.
 * Description: Using 2D array to manage data.
*/

#include <stdio.h>

int main() {
    int X, Y;
    printf("Enter the number of company branches: ");
    scanf("%d", &X);
    printf("Enter the number of mobile phones per branch: ");
    scanf("%d", &Y);
    double bills[X][Y];
    double totalBill = 0.0;
    double maxBill = 0.0;
    int branchWithMaxBill = -1;
    int maxBillBranchID = -1;
    int maxBillMobilePhoneID = -1;
    for (int i = 0; i < X; i++) {
        printf("Enter bill amounts for branch %d:\n", i+1);
        for (int j = 0; j < Y; j++) {
            printf("Enter bill amount for mobile phone %d: ", j+1);
            scanf("%lf", &bills[i][j]);
            totalBill += bills[i][j];
            if (bills[i][j] > maxBill) {
                maxBill = bills[i][j];
                branchWithMaxBill = i;
                maxBillBranchID = i;
                maxBillMobilePhoneID = j;
            }
        }
    }
    printf("Total bill for all branches: %.2lf\n", totalBill);
    for (int i = 0; i < X; i++) {
        double branchTotal = 0.0;
        for (int j = 0; j < Y; j++) {
            branchTotal += bills[i][j];
        }
        printf("Total bill for branch %d: %.2lf\n", i+1, branchTotal);
    }
    printf("Branch ID where maximum bill arrived: %d\n", branchWithMaxBill+1);
    printf("Branch and Mobile Phone IDs where bill is highest: Branch %d, Mobile Phone %d\n", maxBillBranchID+1, maxBillMobilePhoneID+1);
}
