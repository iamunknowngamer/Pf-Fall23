#include <stdio.h>

int main() {
    
    int N,discount_amount,discount_price;
    printf("kitnay paisy kharach keye: ");
    scanf("%d", &N);
    if (N>1999)
    {
        discount_amount = (N/100)*50;
        discount_price = N - discount_amount;
    }
    else if (N>=2000 && N<=4000)
    {
        discount_amount = (N/100)*20;
        discount_price = N - discount_amount;
    }
    else if (N>=4001 && N<=6000)
    {
        discount_amount = (N/100)*30;
        discount_price = N - discount_amount;
    }
    else if (N>6000)
    {
        discount_amount = (N/100)*50;
        discount_price = N - discount_amount;
    }
    
    printf("jo piasy hum ne kharach keye: %d", N);
    printf("\nkinta discount mila: %d", discount_amount);
    printf("\njo piasy discount ke baad dene paray: %d", discount_price);

    
}//udru main likha ha 
