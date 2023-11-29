#include <stdio.h>

int calculatePersistence(int number)
{
    int persistence = 0;
    
    while (number >= 10) {
        int product = 1;
            while (number > 0) {
                product *= number % 10;
                number /= 10;
            }
        number = product;
        persistence++;
    }
    return persistence;
}

int main() 
{
    int userInput;
    printf("Enter a positive integer (EOF to exit): ");

    while (scanf("%d", &userInput) == 1) {
        if (userInput <= 0) printf("Please enter a positive integer.\n");
        else
        {
            int persistence = calculatePersistence(userInput);
            printf("Persistence of %d is %d\n", userInput, persistence);
        }
        while (getchar() != '\n'); printf("\nEnter a positive integer (EOF to exit): "); 
    }
    printf("\nProgram terminated.\n");
}

