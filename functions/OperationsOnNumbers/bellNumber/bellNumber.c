
long factorial(int num) {
  long f = 1;
  while (num > 0) {
    f = f * num;
    num--;
  }
  return f;
}
unsigned long binomialCofficient(int n, int p) {
  unsigned long c = factorial(n) / (factorial(p) * factorial(n - p));
  return c;
}
unsigned long long bellNumber(int n) {
  if (n == 0) {
    return 1;
  }

  unsigned long long bell = 0;
  for (int i = 0; i < n; i++) {
    bell += binomialCofficient(n - 1, i) * bellNumber(i);
  }

  return bell;
}
