long factorial(int num) {
  long f = 1;
  while (num > 0) {
    f = f * num;
    num--;
  }
  return f;
}
