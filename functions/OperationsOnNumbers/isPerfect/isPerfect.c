#include <stdbool.h>
bool isPerfect(int num) {
  int S = 1;
  for (int i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
      S += i;
    }
  }

  return S == num;
}
