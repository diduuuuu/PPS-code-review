#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  int arr[26] = {0};
  char str[1000001];
  scanf("%s", str);

  int len = strlen(str);
  for (int i = 0; i < len; i++) {
    char ch = toupper(str[i]);
    arr[ch - 'A']++;
  }

  int max = 0;
  char index = '?';

  for (int i = 0; i < 26; i++) {
    if (arr[i] > max) {
      max = arr[i];
      index = i + 'A';
    } else if (arr[i] == max) {
      index = '?';
    }
  }

  printf("%c\n", index);

  return 0;
}
