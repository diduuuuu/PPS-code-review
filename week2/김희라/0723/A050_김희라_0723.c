#include <stdio.h>
#include <string.h>

void caesar_cipher(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'D' && str[i] <= 'Z') {
            str[i] -= 3;
        } else if (str[i] >= 'A' && str[i] <= 'C') {
            str[i] += 23;
        }
    }
}

int main() {
    char message[1001];
    scanf("%s", message);

    caesar_cipher(message);
    printf("%s\n", message);

    return 0;
}
