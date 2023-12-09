#include <stdio.h>

typedef struct Box {
  int length;
  int width;
  int height;
} Box;

int main() {
  int num_boxes;
  printf("Enter the number of boxes: ");
  scanf("%d", &num_boxes);
  Box boxes[num_boxes];
  for (int i = 0; i < num_boxes; i++) {
    printf("Enter the length, width and height of box %d: ", i + 1);
    scanf("%d %d %d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
  }
  printf("Boxes that can pass through the tunnel:\n");
  for (int i = 0; i < num_boxes; i++) {
    if (boxes[i].height < 41) {
      printf("Box %d: volume = %d\n", i + 1, boxes[i].length * boxes[i].width * boxes[i].height);
    }
  }
}
