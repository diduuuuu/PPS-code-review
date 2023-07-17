#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool solution(char *s) {
  bool answer = true;
  int length = strlen(s);
  if (length != 4 && length != 6) {
    return false;
  }

  for (int i = 0; i < length; i++) {
    int c = (int)s[i];
    if (c < 48 || c > 57) {
      answer = false;
      break;
    }
  }

  return answer;
}

int main() {
  char input[100];
  printf("Enter the string: ");
  scanf("%s", input);

  bool result = solution(input);

  if (result) {
    printf("The string is a valid number.\n");
  } else {
    printf("The string is not a valid number.\n");
  }

  return 0;
}
