/* Programmer: Syed Saif ur Rehman Shah
* Description: Printing the words of a sentence in reversed order.
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/

#include <stdio.h>
#include <string.h>

void reverse(char sentence[100]){
    int length = strlen(sentence);
    for(int i=0, j=length-1; i<j; i++, j--) {
        char temp = sentence[i];
        sentence[i] = sentence[j];
        sentence[j] = temp;
    }
    printf("Reversed sentence: %s\n", sentence);
}

int main(){
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';
    reverse(sentence);
}

