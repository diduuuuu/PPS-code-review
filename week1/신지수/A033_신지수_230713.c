#include <stdio.h>

int main(void) {
  int N[5];
  int a, b, c, d;
  int max=0;

  for(int i=0; i<5; i++){
    scanf("%d %d %d %d", &a, &b, &c, &d);
    N[i] = a+b+c+d;
  }
  
  
  for (int i=0; i<5; i++){
    if (max<N[i]) {
      max=N[i];
      a = i;
      }
  }
  printf("%d %d", a+1, N[a]);
  return 0;
}
