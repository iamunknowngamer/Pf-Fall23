#include <stdio.h>

int main() {
    
    int bit8,bit7,bit6,bit5,bit4,bit3,bit2,bit1;
    printf("Enter a 8 bit binary number: \n");                                     // give the input in bits 
    scanf("%d%d%d%d%d%d%d%d",&bit8,&bit7,&bit6,&bit5,&bit4,&bit3,&bit2,&bit1);    // will scan each bit you input
    if (bit4 ==1 && bit7 ==1)                                                    // the program will only execute if both bits are open as said in question, if both are on only then it will turn them off.
    {
        bit4 =0;
        bit7 =0;
    }
    
     printf("%d%d%d%d%d%d%d%d",bit8,bit7,bit6,bit5,bit4,bit3,bit2,bit1);
    
    
}//end main
