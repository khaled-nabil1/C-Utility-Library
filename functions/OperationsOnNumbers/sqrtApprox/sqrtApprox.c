double sqrtApprox(int num) {
  double x = num / 2, x1;
  do {
    x1 = x;
    x = 0.5 * (x1 + num / x1);
  } while ((x1 - x) > 0.000000001);
  return x;
}
