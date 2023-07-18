#include <stdio.h>

int main(void) {
  int n;
  int sum=0;
  int testN;

  for (int i=0; i<5; i++){
    scanf("%d", &n);
    sum += n*n;
  }
    
  testN = sum%10;
  printf("%d", testN);
  return 0;
}
