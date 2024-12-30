double power(int base, int exp) {
  if (exp == 0) {
    return 1; 
  }
  
  double result = 1;

  if (exp < 0) {
    base = 1 / base;  
    exp = -exp;      
  }

  for (int i = 1; i <= exp; i++) {
    result = result * base;
  }
  
  return result;
}

