#include <stdio.h>

int calculatePersistence(int n)
{
    int persistence = 0;
    
    while (n >= 10) {
        int product = 1;
            while (n > 0) {
                product *= n % 10;
                n /= 10;
            }
        n = product;
        persistence++;
    }
    return persistence;
}

int main() 
{
    int n;
    printf("Enter a positive integer (EOF to exit): ");

    while (scanf("%d", &n) == 1) {
        if (n <= 0) printf("Please enter a positive integer.\n");
        else
        {
            int persistence = calculatePersistence(n);
            printf("Persistence of %d is %d\n", n, persistence);
        }
        while (getchar() != '\n'); printf("\nEnter a positive integer (EOF to exit): "); 
    }
    printf("\nProgram terminated.\n");
}
