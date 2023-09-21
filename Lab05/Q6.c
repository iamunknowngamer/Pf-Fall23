#include <stdio.h>

int main() {
   
    int N;
    printf("Enter a 8 bit binary number: ");
    scanf("%08d",&N);
    
    if ((((N/1000)%10) == 1) && (((N/1000000)%10) == 1))
    {
        N = N - 1000 - 1000000;
        printf("%08d", N);
    }
    
    return 0;
    
}
