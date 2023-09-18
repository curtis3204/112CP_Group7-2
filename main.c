#include <stdio.h>

int main(void) {
  long long max, min, temp;
  scanf("%lld", &temp);
  max = temp;
  min = temp;
  while (scanf("%lld", &temp) != EOF) {
    if (temp > max) {
      max = temp;
    } else if (temp < min) {
      min = temp;
    }
  }
  printf("%lld,%lld\n", max, min);
  return 0;
}