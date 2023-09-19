#include <stdio.h>

int main() {
    
    int bit1,bit2,bit3,bit4,bit5,bit6,bit7,bit8;
    printf("Enter a 8 bit binary number: \n");                                     // give the input in bits
    scanf("%d%d%d%d%d%d%d%d",&bit1,&bit2,&bit3,&bit4,&bit5,&bit6,&bit7,&bit8);    // will scan each bit you input
    if (bit4 ==1)
    {
        bit4 =0;
    }
    if (bit7 ==1)
    {
        bit7 =0;
    }
     printf("%d%d%d%d%d%d%d%d",bit1,bit2,bit3,bit4,bit5,bit6,bit7,bit8);
    
    
}//end main
