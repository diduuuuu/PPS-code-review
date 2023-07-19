#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);

  int sum = 0;
  for (int i = 0; i < N; i++) {
    int n;
    scanf("%d", &n);
    sum += n;
  }

  printf("%d", sum - N + 1);

  return 0;
}
