/* Programmer: Syed Saif ur Rehman Shah
* Date: 9/12/2023
* Description: This is the code for Question 5
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/tree/main/Lab03
*/

//--Include Files--//
#include <stdio.h>
#include <stdlib.h>
//--Global Variables--//

int main() {
    int day1, month1, year1;
    int day2, month2, year2;

    // DOB first person
    printf("Enter the date of birth (DD MM YYYY) for Person 1: ");
    scanf("%d %d %d", &day1, &month1, &year1);

    // DOB second person
    printf("Enter the date of birth (DD MM YYYY) for Person 2: ");
    scanf("%d %d %d", &day2, &month2, &year2);

    // Comparing birth years
    if (year1 < year2) {
        printf("Person 1 is older.\n");
    } else if (year1 > year2) {
        printf("Person 2 is older.\n");
    } else {
        // If years same, we compare months
        if (month1 < month2) {
            printf("Person 1 is older.\n");
        } else if (month1 > month2) {
            printf("Person 2 is older.\n");
        } else {
            // If months are same, we compare days
            if (day1 < day2) {
                printf("Person 1 is older.\n");
            } else if (day1 > day2) {
                printf("Person 2 is older.\n");
            } else {
                printf("Both persons have the same birthdate.\n");
            }
        }
    }

    return 0;
}//end main
