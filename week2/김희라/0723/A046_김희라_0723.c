#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int arr[26] = {0};

  for (int i = 0; i < n; i++) {
    char name[31];
    scanf("%s", name);
    arr[name[0] - 'a']++;
  }

  int count = 0;
  for (int i = 0; i < 26; i++) {
    if (arr[i] >= 5) {
      printf("%c", i + 'a');
      count++;
    }
  }

  if (count == 0)
    printf("PREDAJA");

  return 0;
}
