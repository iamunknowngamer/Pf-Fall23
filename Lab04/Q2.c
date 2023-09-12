/* Programmer: Syed Saif ur Rehman Shah
* Date: 9/12/2023
* Description: This is the code for Question 1
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/tree/main/Lab03
*/

//--Include Files--//
#include <stdio.h>
#include <stdlib.h>
//--Global Variables--//

 int main()  
{  
    int n;  
    printf("Define any number: ");  
    scanf("%d",&n);  
    for( int i=0; i<n ; i++ )  
    {   
        for( int j=0 ; j<n ; j++ )  
        {  
            	printf("*");  
        }  
        	printf("\n");  
    }  
      
    return 0;  
}//end main 
	
	
