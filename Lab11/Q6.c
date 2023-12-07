#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int daysInMonth(int month, int year) {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }

    return days[month];
}
struct Date addDays(struct Date currentDate, int daysToAdd) {
    currentDate.day += daysToAdd;

    while (currentDate.day > daysInMonth(currentDate.month, currentDate.year)) {
        currentDate.day -= daysInMonth(currentDate.month, currentDate.year);
        currentDate.month++;

        if (currentDate.month > 12) {
            currentDate.month = 1;
            currentDate.year++;
        }
    }

    return currentDate;
}

void displayDate(struct Date date) {
    printf("%d-%02d-%02d\n", date.year, date.month, date.day);
    
}
int main() {
    struct Date currentDate = {5, 12, 2022};
    printf("Current Date: ");
    displayDate(currentDate);

    currentDate = addDays(currentDate, 45);
    printf("Final Date: ");
    displayDate(currentDate);
}
