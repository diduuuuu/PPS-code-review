#include <stdio.h>

int main(void) {
  int n, t;
  int sum=0;

  scanf("%d", &t);
  for (int i=0; i<t; i++){
    scanf("%d", &n);
    sum += n;
  }
  sum -= t-1;
  printf("%d", sum);
  return 0;
}
