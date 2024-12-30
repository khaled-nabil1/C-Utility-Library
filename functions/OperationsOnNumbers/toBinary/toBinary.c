#include <stdio.h>
void toBinary(int num) {
  int S = 0;
  while (num > 0) {
    S = S * 10 + num % 2;
    num = num / 2;
  }
  int R = 0;
  while (S > 0) {
    R = R * 10 + S % 10;
    S = S / 10;
  }
  printf("%d", R);
}
