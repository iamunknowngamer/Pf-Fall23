/* Programmer: Syed Saif ur Rehman Shah
*  Description: This is the code for Question 8
*  Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/

#include <stdio.h>

typedef struct Box {
  int length;
  int width;
  int height;
} Box;

int main() {
  int n;
  printf("Enter the number of boxes: ");
  scanf("%d", &n);
  Box boxes[n];
  for (int i = 0; i < n; i++) {
    printf("Enter the length, width and height of box %d: ", i + 1);
    scanf("%d %d %d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
  }
  printf("Boxes that can pass through the tunnel:\n");
  for (int i = 0; i < n; i++) {
    if (boxes[i].height < 41) {
      printf("Box %d: volume = %d\n", i + 1, boxes[i].length * boxes[i].width * boxes[i].height);
    }
  }
}
