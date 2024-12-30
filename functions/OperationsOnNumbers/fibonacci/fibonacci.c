#include <stdio.h>
void fibonacciSeries(int n) {
  int F1 = 0, F2 = 1, F;

  if (n >= 1) {
    printf("%d ", F1);
  }

  if (n >= 2) {
    printf("%d ", F2);
  }

  for (int i = 3; i <= n; i++) {
    F = F1 + F2;
    printf("%d ", F);
    F1 = F2;
    F2 = F;
  }
}

