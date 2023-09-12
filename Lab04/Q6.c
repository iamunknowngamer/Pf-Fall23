/* Programmer: Syed Saif ur Rehman Shah
* Date: 9/12/2023
* Description: This is the code for Question 6, only in this part i use help from the web because it was hard for me as its my 1st time coding in c and i dont know all syntax and commands too.
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/tree/main/Lab03
*/

//--Include Files--//
#include <stdio.h>
#include <stdlib.h>
//--Global Variables--//

int main()  
{  
  int n;  
  
  printf("Enter number of rows: ");  
  scanf("%d",&n);  
  
  for(int i=1; i<=n; i++)  
  {  
     for(int j=i; j<=n; j++)  
     {  
       printf(" ");  
     }  
     for(int k=1; k<=2*i-1; k++)  
     {  
       if(k==1 || k==(2*i-1)) printf("*");  
       else printf(" ");  
     }  
     printf("\n");  
  }  
  
  for(int i=n-1; i>=1; i--)  
  {  
     for(int j=n; j>=i; j--)  
     {  
       printf(" ");  
     }  
     for(int k=1; k<=2*i-1; k++)  
     {  
       if(k==1 || k==2*i-1) printf("*");  
       else printf(" ");  
     }  
     printf("\n");  
  }  
  
  return 0;  
} //end main 

