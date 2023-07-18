#include <stdio.h>

int main(void) {
  int N, T;
  int Yfee=0, Mfee=0;
  int Y, M;

  scanf("%d", &N);
  for (int i=0; i<N; i++){
    scanf("%d", &T);
    
    Y=T/30+1;
    M=T/60+1;

    Yfee+=Y*10;
    Mfee+=M*15;
  }
  if(Yfee==Mfee) printf("Y M %d", Yfee);
  else if(Yfee>Mfee) printf("M %d", Mfee);
  else printf("Y %d", Yfee);
  
  return 0;
}
