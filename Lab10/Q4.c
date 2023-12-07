/* Programmer: Syed Saif ur Rehman Shah
* Description: Printing the words of a sentence in reversed order.
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/

#include <stdio.h>
#include <string.h>

void reverseWord(char* start, char* end){
    while (start < end){
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseWords(char* sentence){
    char* start = sentence;
    char* end = sentence;
    
    while (*end != '\0'){
        if (*end == ' '){
            reverseWord(start, end - 1);
            start = end + 1;
        }
        end++;
    }
    reverseWord(start, end - 1);
}

int main(){
    char sentence[1000];
    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';
    reverseWords(sentence);

    printf("Modified Sentence: %s\n", sentence);
}
