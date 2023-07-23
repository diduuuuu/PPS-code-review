int countPrimes(int n) {
  int output = 0;
  bool c = true;
  if (n == 0)
    return 0;
  for (int i = 2; i < n; i++) {
    for (int j = 2; j < i; j++) {
      if (i % j != 0)
        c = true;
      else {
        c = false;
        break;
      }
    }
    if (c == true) {
      output++;
    }
  }
  return output;
}