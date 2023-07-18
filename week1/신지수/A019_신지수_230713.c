#include <stdio.h>

int N[10];

int main(void) {
  int a,b,c;
  int sum;

  scanf("%d %d %d",&a, &b, &c);
  
  sum = a*b*c;
  
  for (int i=sum; i>0; i/=10){
    N[i%10]++;
  }
  
  for (int i=0; i<10; i++){
    printf("%d\n", N[i]);
  }
  
  return 0;
}
