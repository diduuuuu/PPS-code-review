#include <stdio.h>
#include <string.h>

int main(void) {
  char str[100] = {0,};
  
  scanf("%s", str);
  
  printf("%c", str[0]);

  for (int i=1; i<strlen(str); i++) {
    if(i%10==0) printf("\n");
    printf("%c", str[i]);
  }
  return 0;
}
