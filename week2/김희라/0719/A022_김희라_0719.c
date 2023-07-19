#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);

  int Y = 0;
  int M = 0;

  for(int i = 0; i<N ; i++){
    int time;
    scanf("%d", &time);

    Y += (time/30+1)*10;
    M += (time/60+1)*15;
  }

  if(Y < M){
   printf("Y %d", Y);
  }
  else if(M < Y){
    printf("M %d", M);
  }
  else printf("Y M %d", Y);

  return 0;
}
