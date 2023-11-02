#include <stdio.h>

int main() {
    // Define the 2D array representing flight availability
    int availability[5][2] = {
        {1, 0},
        {1, 1},
        {0, 1},
        {1, 0},
        {1, 1}
    };

    // Define prices for morning and evening flights
    int morningPrice[5] = {300, 320, 280, 380, 375};
    int eveningPrice[5] = {0, 310, 280, 0, 400};

    // 1. Analyze the flight availability for each day and time slot.
    int bestDay = -1;
    int bestTimeSlot = -1;
    int highestChance = 0;
    for (int day = 0; day < 5; day++) {
        for (int timeSlot = 0; timeSlot < 2; timeSlot++) {
            if (availability[day][timeSlot] == 1) {
                int chance = 0;
                if (timeSlot == 0) {
                    chance = morningPrice[day];
                } else {
                    chance = eveningPrice[day];
                }
                if (chance > highestChance) {
                    bestDay = day;
                    bestTimeSlot = timeSlot;
                    highestChance = chance;
                }
            }
        }
    }

    printf("1. Best option: %s, %s time slot\n", 
           bestDay != -1 ? "Day " : "No available flights",
           bestTimeSlot == 0 ? "Morning" : "Evening");

    // 2. The traveler prefers morning time slot.
    printf("2. Suggested day(s) for morning flight: ");
    for (int day = 0; day < 5; day++) {
        if (availability[day][0] == 1) {
            printf("Day %d, ", day + 1);
        }
    }
    printf("\n");

    // 3. The traveler prefers evening time slot.
    printf("3. Suggested day(s) for evening flight: ");
    for (int day = 0; day < 5; day++) {
        if (availability[day][1] == 1) {
            printf("Day %d, ", day + 1);
        }
    }
    printf("\n");

    // 4. Inquiring about flights on a specific day.
    int specificDay = 3; // Change this to the desired day (0-4)
    if (availability[specificDay][0] == 1) {
        printf("4. Flights available on Day %d (Morning) for $%d\n", specificDay + 1, morningPrice[specificDay]);
    } else if (availability[specificDay][1] == 1) {
        printf("4. Flights available on Day %d (Evening) for $%d\n", specificDay + 1, eveningPrice[specificDay]);
    } else {
        printf("4. No flights available on Day %d\n", specificDay + 1);
    }

    return 0;
}
