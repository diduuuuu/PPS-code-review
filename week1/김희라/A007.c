#include <stdio.h>

int main() {
  int numarr[8];
  char result[10] = "";

  for (int i = 0; i < 8; i++) {
    scanf("%d", &numarr[i]);
  }

  for (int i = 0; i < 7; i++) {
    if (numarr[i] + 1 == numarr[i + 1]) {
      strcpy(result, "ascending");
    } else if (numarr[i] - 1 == numarr[i + 1]) {
      strcpy(result, "descending");
    } else {
      strcpy(result, "mixed");
      break;
    }
  }

  printf("%s\n", result);
  return 0;
}
