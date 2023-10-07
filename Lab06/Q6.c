/**
 * Programmer: Syed Saif ur Rehman Shah.
 * Description: This Question is done by two methods by me and both are uplaoded here.
*/

#include <stdio.h>
#include <unistd.h>

int main()
{   
    printf(" 'The Matchstick Game' \n");
    int m=21;
    int i=0;
    while(i<m)
    {
        i = i+1;
        printf(" *");
    }
    int N;int count=1;
    printf("\n\n Please choose a number from 1 to 4: ");
    scanf("%d",&N);
    if (N<=4)
    {
        switch (N)
        {
            case 1:
                m=21;
                i=1;
                while(i<m)
                {
                    i = i+1;
                    printf(" *");
                }
                sleep (1);
                printf("\n The consule is taking his turn wait...");
                break;
            case 2:
                m=21;
                i=2;
                while(i<m)
                {
                    i = i+1;
                    printf(" *");
                }
                sleep (1);
                printf("\n The consule is taking his turn wait...");
                break;
            case 3:
                m=21;
                i=3;
                while(i<m)
                {
                    i = i+1;
                    printf(" *");
                }
                sleep (1);
                printf("\n The consule is taking his turn wait...");
                break;
            case 4:
                m=21;
                i=4;
                while(i<m)
                {
                    i = i+1;
                    printf(" *");
                }
                sleep (1);
                printf("\n The consule is taking his turn wait...");
                break;
                
        }
        printf("\n");
        sleep (1);
        m=21;
        i=5;
        while(i<m)
        {
            i = i+1;
            printf(" *");
        }
    }
    else printf("Error! Restart the game");
    printf("\n\n Ur turn choose from 1 to 4: ");
    scanf("%d",&N);
    if (N<=4)
    {
        switch (N)
        {
            case 1:
                m=21;
                i=6;
                while(i<m)
                {
                    i = i+1;
                    printf(" *");
                }
                sleep (1);
                printf("\n The consule is taking his turn wait...");
                break;
            case 2:
                m=21;
                i=7;
                while(i<m)
                {
                    i = i+1;
                    printf(" *");
                }
                sleep (1);
                printf("\n The consule is taking his turn wait...");
                break;
            case 3:
                m=21;
                i=8;
                while(i<m)
                {
                    i = i+1;
                    printf(" *");
                }
                sleep (1);
                printf("\n The consule is taking his turn wait...");
                break;
            case 4:
                m=21;
                i=9;
                while(i<m)
                {
                    i = i+1;
                    printf(" *");
                }
                sleep (1);
                printf("\n The consule is taking his turn wait...");
                break;
                
        }
        printf("\n");
        sleep (1);
        m=21;
        i=10;
        while(i<m)
        {
            i = i+1;
            printf(" *");
        }
    }
    else printf("Error! Restart the game");
    printf("\n\n Ur turn choose from 1 to 4: ");
    scanf("%d",&N);
    if (N<=4)
    {
        switch (N)
        {
            case 1:
                m=21;
                i=11;
                while(i<m)
                {
                    i = i+1;
                    printf(" *");
                }
                sleep (1);
                printf("\n The consule is taking his turn wait...");
                break;
            case 2:
                m=21;
                i=12;
                while(i<m)
                {
                    i = i+1;
                    printf(" *");
                }
                sleep (1);
                printf("\n The consule is taking his turn wait...");
                break;
            case 3:
                m=21;
                i=13;
                while(i<m)
                {
                    i = i+1;
                    printf(" *");
                }
                sleep (1);
                printf("\n The consule is taking his turn wait...");
                break;
            case 4:
                m=21;
                i=14;
                while(i<m)
                {
                    i = i+1;
                    printf(" *");
                }
                sleep (1);
                printf("\n The consule is taking his turn wait...");
                break;
                
        }
        printf("\n");
        sleep (1);
        m=21;
        i=15;
        while(i<m)
        {
            i = i+1;
            printf(" *");
        }
    }
    else printf("Error! Restart the game");
    printf("\n\n Ur turn choose from 1 to 4: ");
    scanf("%d",&N);
    if (N<=4)
    {
        switch (N)
        {
            case 1:
                m=21;
                i=16;
                while(i<m)
                {
                    i = i+1;
                    printf(" *");
                }
                sleep (1);
                printf("\n The consule is taking his turn wait...");
                break;
            case 2:
                m=21;
                i=17;
                while(i<m)
                {
                    i = i+1;
                    printf(" *");
                }
                sleep (1);
                printf("\n The consule is taking his turn wait...");
                break;
            case 3:
                m=21;
                i=18;
                while(i<m)
                {
                    i = i+1;
                    printf(" *");
                }
                sleep (1);
                printf("\n The consule is taking his turn wait...");
                break;
            case 4:
                m=21;
                i=19;
                while(i<m)
                {
                    i = i+1;
                    printf(" *");
                }
                sleep (1);
                printf("\n The consule is taking his turn wait...");
                break;
                
        }
        printf("\n");
        sleep (1);
        m=21;
        i=20;
        while(i<m)
        {
            i = i+1;
            printf(" *");
        }
    }
    else printf("Error! Restart the game");

sleep(1);
printf("\n You lose :(");

}//end

//Alternate (Nested Loops) Method:

#include <stdio.h>
#include <unistd.h>


int main()
{
    int N,j;
    int k = 21;
    int b =21;
    printf(" 'The MatchStick Game' \n");
    for(j=1; j<=21; j++)
    {
        printf(" |");
    }
    for(int i=1; i<=4; i++)
    {   
        printf("\n\n Ur turn, Choose a number (1,2,3,4): ");
        scanf("%d", &N);
        int d;
        if (N<=4)
        {
            int l= k - d - N;
            k=l;
            for(int total= l ; total>0; total--)
            {
                printf(" |");
            }
                sleep(1);
                printf("\n The consule is taking his turn...\n");
                sleep (1);
                if (N<5)
                {
                    N = 5;
                    int c = b - N;
                    b = c;
                    for (int t=c; t>0; t--)
                    {
                        printf(" |");
                    }
                }
            d = k - b;
        }
        else
        {
            printf(" Please abide by the rules, choose any number from 1 to 4: ");
            scanf("%d", &N);
            int l= k - d - N;
            k=l;
            for(int total= l ; total>0; total--)
            {
                printf(" |");
            }
            sleep(1);
            printf("\n The consule is taking his turn...\n");
            sleep (1);
            if (N<5)
            {
                N = 5;
                int c = b - N;
                b = c;
                for (int t=c; t>0; t--)
                {
                    printf(" |");
                }
            }
            d = k - b;
        }
    }
    printf("\n\n You Lose :(");

}//end
