/* Programmer: Syed Saif ur Rehman Shah
*  Description: This is the code for Question 2
*  Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/

#include <stdio.h>
#include <string.h>

struct EnginePart {char serialNumber[4];int yearOfManufacture;char material[20];int quantityManufactured;};

void retrievePartsInRange(struct EnginePart parts[], int n, const char* startSerial, const char* endSerial) {
    printf("Parts with serial numbers between %s and %s:\n", startSerial, endSerial);

    for (int i = 0; i < n; i++) {
        if (strcmp(parts[i].serialNumber, startSerial) >= 0 && strcmp(parts[i].serialNumber, endSerial) <= 0) {
            printf("Serial Number: %s\n", parts[i].serialNumber);
            printf("Year of Manufacture: %d\n", parts[i].yearOfManufacture);
            printf("Material: %s\n", parts[i].material);
            printf("Quantity Manufactured: %d\n", parts[i].quantityManufactured);
            printf("\n");
        }
    }
}

int main() {
    struct EnginePart engineParts[] = {
        {"AA0", 2020, "Steel", 100},
        {"BB1", 2021, "Aluminum", 150},
        {"CC6", 2019, "Plastic", 120},
        {"DD2", 2022, "Titanium", 80},
    };
    retrievePartsInRange(engineParts, 4, "BB1", "CC6");
}
