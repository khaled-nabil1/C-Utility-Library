#include <stdbool.h>
bool isprime(int num) {
  if (num == 1)
    return false;
  else if (num == 2)
    return true;
  else {
    int i = 2;
    while (i * i <= num) {
      if (num % i == 0)
        return false;
      i++;
    }
    return true;
  }
}
