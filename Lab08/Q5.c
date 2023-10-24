/* Programmer: Syed Saif ur Rehman Shah
* Date: 10/10/2023
* Description: This is the code for Question 5
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/

#include <stdio.h>

int carusage(int carnumber, int day)
{
    if (carnumber%2==0 && day%2==0 || carnumber%2!=0 && day%2!=0)
    {
        return 1;
    }
    else return 0;
}
int main()
{
    int carnumber,day;
    printf("Enter the numeric value of ur car's number: ");
    scanf("%d", &carnumber);
    
    printf("Enter the day of the week(1 to 7): ");
    scanf("%d", &day);
    
    carusage(carnumber,day);
    
    if(carusage(carnumber,day)==1)
    {
        printf("You should use your car today.");
    }
    else printf("You should not use your car today.");
}//end
