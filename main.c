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
<<<<<<< HEAD
  printf("%g,%g\n", max, min);
=======
  printf("max,min");
  printf("%lf,%lf", max, min);
>>>>>>> 27b8901411c0ec9a046684dbf5d73220a26fc40d
  return 0;
}