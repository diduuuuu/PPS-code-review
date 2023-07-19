#include <stdio.h>
#include <string.h>

int main() {
  char N[8];
  scanf("%s", N);

  int arr[10] = {0};

  for (int i = 0; i < strlen(N); i++) {
    int num = N[i] - '0';

    if (num == 9)
      num = 6;

    arr[num]++;
  }

  arr[6] = (arr[6] / 2) + (arr[6] % 2);

  int max = 0;
  for (int i = 0; i < 10; i++) {
    if (arr[i] > max)
      max = arr[i];
  }

  printf("%d\n", max);

  return 0;
}
