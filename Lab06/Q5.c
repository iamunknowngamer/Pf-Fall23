/**
 * Programmer: Syed Saif ur Rehman Shah.
 * Description: Practicing Programming.
 */


#include <stdio.h>

int main()
{
    int i=0;
    int count=0;
    while(1)
    {
        printf("           %d",i);
        count = count + 1;
        if (count==4) break;
    }
    printf("\n\n            ");
    i=1;count=0;
    while(1)
    {
        printf("           %d",i);
        count = count + 1;
        if (count==2) break;
    }
    printf("\n\n");
    i=2;count=0;
    while(1)
    {
        printf("           %d",i);
        count = count + 1;
        if (count==4) break;
    }
    printf("\n\n            ");
    i=3;count=0;
    while(1)
    {
        printf("           %d",i);
        count = count + 1;
        if (count==2) break;
    }
    printf("\n\n");
    i=4;count=0;
    while(1)
    {
        printf("           %d",i);
        count = count + 1;
        if (count==4) break;
    }
    printf("\n\n            ");
    i=5;count=0;
    while(1)
    {
        printf("           %d",i);
        count = count + 1;
        if (count==2) break;
    }
    printf("\n\n");
    i=6;count=0;
    while(1)
    {
        printf("           %d",i);
        count = count + 1;
        if (count==4) break;
    }
}//end

//Alternate method(easy):
#include <stdio.h>

int main()
{
    int i=0;
    int count=0;
    for(i=0; i<=6; i++)
    {
        if(i%2==0)
        {   
            count = 0;
            while(count<4)
            {
                printf("         %d",i);
                count=count+1;
            }
        }
        else if(i%2!=0)
        {
            count=0;
            printf("          ");
            while(count<2)
            {
                printf("         %d",i);
                count=count+1;
            }
        }
        printf("\n");
    }
}//end
