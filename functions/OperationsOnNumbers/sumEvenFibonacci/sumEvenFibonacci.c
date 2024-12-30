int sumEvenFibonacci(int n) {
  int S = 0;
  for (int i = 0; i <= n; i += 3) {
    int F = 0, F1 = 1, F2 = 0;

    for (int j = 1; j < i; j++) {
      F = F1 + F2;
      F2 = F1;
      F1 = F;
    }
    S += F;
  }
  return S;
}
