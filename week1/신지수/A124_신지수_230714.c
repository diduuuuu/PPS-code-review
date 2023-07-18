#include <stdio.h>

int main(void) {
  int N, a;

  scanf("%d", &N);
  a=N;
  
  for(int i=2; i<=N; i++) {
    while(1){
      if(a%i==0){
        a/=i;
        printf("%d\n",i);
      }
      else
        break;
    }
  }
  return 0;
}
