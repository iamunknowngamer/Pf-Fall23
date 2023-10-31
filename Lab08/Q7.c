/* Programmer: Syed Saif ur Rehman Shah
* Description: This is the code for Question 7
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/

#include <stdio.h>

int calculateDiscount(int price, int visits) 
{
    int discount_price = price;
    if (visits > 5 && price >= 30) 
    {
        discount_price -= (price * 10) / 100;
    } 
    else if (visits > 10 && price >= 50) 
    {
        discount_price -= (price * 15) / 100;
    } 
    else 
    {
        printf("Sadly, no discount.\n");
    }
    
    return discount_price;
}

int main() {
    int price, visits, discount_price;

    printf("How many times did you visit the shop in the past month: ");
    scanf("%d", &visits);

    printf("The total amount of the purchases you made: ");
    scanf("%d", &price);

    discount_price = calculateDiscount(price, visits);

    if (discount_price != price) {
        printf("The discounted amount is: %d\n", discount_price);
    }

    return 0;
}
