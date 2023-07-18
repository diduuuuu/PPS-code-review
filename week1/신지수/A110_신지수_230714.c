#include <stdio.h>

int main(void) {
  int money;
  int coin[] = {500, 100, 50, 10, 5, 1};
  int i=0, n=0;

  scanf("%d", &money);

  money = 1000-money;
  
  while(money>0){
    if(money>=coin[i]){
      money-=coin[i];
      n++;
      }
    else i++;
  }
  printf("%d", n);
  
  return 0;
}