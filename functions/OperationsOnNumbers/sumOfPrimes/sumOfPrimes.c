#include <stdbool.h>
bool isPrime(int num) {
  int i = 2;
  while (i * i <= num) {
    if (num % i == 0)
      return false;
    i++;
  }

  return true;
}

int sumOfPrimes(int n) {
  int S = 0;
  for (int i = 1; i <= n; i++) {
    if (isPrime(i))
      S += i;
  }
  return S;
}

