#include <stdbool.h>
bool isArmstrong(int num) {
  int S = 0, n_copy = num, num_of_digits = 0, digit, digit_power;

  while (n_copy > 0) {
    n_copy = n_copy / 10;
    num_of_digits++;
  }
  n_copy = num;
  while (n_copy > 0) {
    digit = n_copy % 10;
    n_copy = n_copy / 10;
    digit_power = 1;
    for (int i = 1; i <= num_of_digits; i++) {
      digit_power = digit_power * digit;
    }
    S += digit_power;
  }

  return num == S;
}
