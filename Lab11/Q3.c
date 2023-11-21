/* Programmer: Syed Saif ur Rehman Shah
*  Description: This is the code for Question 3
*  Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/
#include <stdio.h>
struct Date {int day;int month;int year;};

int compareDates(struct Date date1, struct Date date2) {
    if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    struct Date date1, date2;
    
    printf("Enter the first date (day month year): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
    
    printf("Enter the second date (day month year): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    if (compareDates(date1, date2)) {
        printf("Dates are equal.\n");
    } else {
        printf("Dates are not equal.\n");
    }
}
