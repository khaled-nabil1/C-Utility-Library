#include <stdbool.h>

bool isHarshad(int num) {
  int n = num, S = 0;
  if (num < 10) {
    return true;
  }
  while (num > 0) {
    S += num % 10;
    num = num / 10;
  }
  return n % S == 0;
}
