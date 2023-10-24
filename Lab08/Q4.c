/* Programmer: Syed Saif ur Rehman Shah
* Date: 10/10/2023
* Description: This is the code for Question 1
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/


#include <stdio.h>
#include <string.h>

int main(){
    char passcode[] ="Secure123";
    char input[10];
    printf("Enter the password: ");
    gets(input);
    
    if(strlen(input)<8)
    {
        printf("Password must contain atleast 8 characters!");
    }
    else
    {
        if(strcmp(input, passcode)==0)
        {
            printf("Login successful. Welcome!");
        }
        else
        {
            printf("Login failed. Incorrect password.");
        }
    }
}
