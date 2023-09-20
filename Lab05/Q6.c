#include <stdio.h>

int main() {
    
    int bit1,bit2,bit3,bit4,bit5,bit6,bit7,bit8;
    printf("Enter a 8 bit binary number: \n");                                     // give the input in bits
    scanf("%d%d%d%d%d%d%d%d",&bit1,&bit2,&bit3,&bit4,&bit5,&bit6,&bit7,&bit8);    // will scan each bit you input
    if (bit5 ==1)
    {
        bit5 =0;
    }
    if (bit2 ==1)
    {
        bit2 =0;
    }
     printf("%d%d%d%d%d%d%d%d",bit1,bit2,bit3,bit4,bit5,bit6,bit7,bit8);
    
    
}//end main

