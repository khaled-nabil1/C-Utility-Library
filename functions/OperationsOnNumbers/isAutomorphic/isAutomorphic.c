#include <stdbool.h>
bool isAutomorphic(int num) {
  int num_of_digits = 0, num_copy = num, ten_pow = 1;

  while (num_copy > 0) {
    num_copy = num_copy / 10;
    num_of_digits++;
  }
  for (int i = 1; i <= num_of_digits; i++) {
    ten_pow = ten_pow * 10;
  }
  return (num * num) % ten_pow == num;
}

