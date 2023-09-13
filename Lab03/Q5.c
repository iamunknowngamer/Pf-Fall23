#include <stdio.h>

int main() {
    int North, South, West, Fuel_per_1km, Total_Distance, Total_Fuel_consumed;
    printf("Distance Travelled North: ");
    scanf("%d", &North);
    printf("Distance Travelled South: ");
    scanf("%d", &South);
    printf("Distance Travelled West: ");
    scanf("%d", &West);
    printf("Fuel consumed per 1km: ");
    scanf("%d", &Fuel_per_1km);
    if (Fuel_per_1km > 0)
    {
        Total_Distance = North + South + West;
        Total_Fuel_consumed = Fuel_per_1km * Total_Distance;
        printf("Total Distance covered is: %d", Total_Distance);
        printf(", Total Fuel consumed is: %d", Total_Fuel_consumed);
    } 
    else
    {
        printf("Invalid Input");
     }

    return 0;
}//end main
