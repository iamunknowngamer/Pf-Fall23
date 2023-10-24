/* Programmer: Syed Saif ur Rehman Shah
* Date: 10/10/2023
* Description: This is the code for Question 1
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    char c;
    int count=0;
    
    printf("Enter the text: ");
    gets(text);

    printf("Enter the character you want to search for: ");
    scanf(" %c", &c);
    
    for(int i=0; text[i] != '\0'; i++)
    {
        if(text[i]==c)
        {
            count++;
        }
    }
    printf("The character %c appeared %d times in the text.", c, count);
}
