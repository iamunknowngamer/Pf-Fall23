#include <stdio.h>

int main () {
    int b1,b2,b3,b4,b5,b6,b7,b8;
    printf("Enter 8 bit binary number: \n");                                                  // give the input in bits
    scanf("%d%d%d%d%d%d%d%d", &b1,&b2,&b3,&b4,&b5,&b6,&b7,&b8);                              // will scan each bit you input
    printf("%d%d%d%d%d%d%d%d", b5,b6,b7,b8,b1,b2,b3,b4);                                    // will change the higher 4 bits with lower 4 bits
}//end
