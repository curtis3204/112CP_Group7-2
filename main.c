#include <stdio.h>

int main(void) {
  double max, min, temp;
  printf("Enter a number: ");
  scanf("%lf", &temp);
  max = temp;
  min = temp;
  while (scanf("%lf", &temp) != EOF) {
    printf("GO");
    if (temp > max) {
      max = temp;
    } else if (temp < min) {
      min = temp;
    }
  }

  printf("%g,%g\n", max, min);

  return 0;
}
