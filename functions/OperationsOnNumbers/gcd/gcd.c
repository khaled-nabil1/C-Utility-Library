
int gcd(int a, int b) {
  int r, max;
  if (b > a)
    max = b, b = a, a = max;
  do {
    r = a % b;
    a = b;
    b = r;
  } while (r > 0);
  return a;
}
