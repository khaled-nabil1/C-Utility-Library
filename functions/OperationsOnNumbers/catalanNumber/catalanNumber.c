unsigned long catalanNumber(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }

  unsigned long catalan = 1;

  for (int i = 0; i < n; i++) {
    catalan = catalan * (2 * n - i) / (i + 1);
  }

  return catalan / (n + 1);
}

