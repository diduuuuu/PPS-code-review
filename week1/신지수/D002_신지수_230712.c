#include <stdio.h>

int main(void) {
  int test,H,W,N;
  int floor,number;
  
  scanf("%d",&test);
  
  for (int i=0;i<test;i++)
  {
    scanf("%d %d %d",&H,&W,&N);

    floor = N%H;
    number = N/H;

    if (floor > 0) number++;
    if (floor == 0) {printf("%d%.2d\n", H, number);}

    else {
      printf("%d%.2d\n", floor, number);
    }
  } 
  return 0;
}
