#include <stdio.h>

int main(void) {
  double max, min, temp;
  scanf("%lf", &temp);
  max = temp;
  min = temp;
  while (scanf("%lf", &temp) != EOF) {
    if (temp > max) {
      max = temp;
    } else if (temp < min) {
      min = temp;
    }
  }
  printf("%lf,%lf", max, min);
  return 0;
}