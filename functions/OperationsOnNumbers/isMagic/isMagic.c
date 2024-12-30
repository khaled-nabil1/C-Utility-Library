#include <stdbool.h>
bool isMagic(int num) {
  int S;
  do {
    S = 0;
    do {
      S += num % 10;
      num = num / 10;
    } while (num > 0);
    num = S;
  } while (S > 9);
  return num == 1;
}

