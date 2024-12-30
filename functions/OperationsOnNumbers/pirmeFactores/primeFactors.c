#include <stdio.h>
void primeFactors(int num) {
  int i = 2, n = num;
  for (i; i*i <= num; i++) {
    while (n % i == 0) {
      printf("%d  ", i);
      n = n / i;
    }
  }
}

