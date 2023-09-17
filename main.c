#include <stdio.h>

int main(void) {
  int max, min, temp;
  scanf("%d", &temp);
  max = temp;
  min = temp;
  while (scanf("%d", &temp) != EOF) {
    if (temp > max) {
      max = temp;
    } else if (temp < min) {
      min = temp;
    }
  }
  printf("%d,%d", max, min);
  return 0;
}