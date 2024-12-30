#include <stdbool.h>
int getnext(int n) { // Helping function for isHappy()
  int S = 0;
  while (n > 0) {
    S += (n % 10) * (n % 10);
    n = n / 10;
  }
  return S;
}
bool isHappy(int num) {
  int slow = num, fast = num;

  do {
    slow = getnext(slow);
    fast = getnext(getnext(fast));
  } while (slow != fast);

  return slow == 1;
}
