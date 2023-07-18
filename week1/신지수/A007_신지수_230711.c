#include <stdio.h>

int main(void) {
  int input[8];
  int asc=0;
  int desc=0;

  for (int i=0; i<8; i++){
    scanf("%d",&input[i]);
    }
  
  for (int i=0; i<7; i++){
    if (input[i] < input[i+1]) 
      asc++;
    else if (input[i] > input[i+1])
      desc++;
  }

  if (asc==7) 
    printf("ascending");
  else if (desc==7) 
    printf("descending");
  else 
    printf("mixed");
  return 0;
}
