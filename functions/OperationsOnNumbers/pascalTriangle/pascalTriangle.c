#include <stdio.h>

void pascalTriangle(int n) {
  for (int i = 0; i < n; i++) {
    for (int k = 0; k <= n - i; k++)
      printf(" ");

    unsigned long c = 1;

    for (int j = 0; j <= i; j++) {
      printf("%lu ", c);
      c = c * (i - j) / (j + 1);
    }
    printf("\n");
  }
}
