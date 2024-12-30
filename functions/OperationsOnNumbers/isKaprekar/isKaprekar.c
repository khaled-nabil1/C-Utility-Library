#include <stdbool.h>
bool isKaprekar(int num) {
  int power = 1, num_copy = num, num_of_digits = 0, S = 0;
  while (num_copy > 0) {
    num_of_digits++;
    num_copy = num_copy / 10;
  }
  for (int i = 1; i <= num_of_digits; i++) {
    power = power * 10;
  }
  S = num * num / power + num * num % power;
  return S == num;
}

