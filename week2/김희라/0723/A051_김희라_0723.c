#include <stdio.h>

int main() {
    char input[1001];
    scanf("%s", input);

    int al[26] = {0};
    int cnt = 0;
    int s = 3;

    for (int i = 0; i < 26; i++) {
        if (i == 15 || i == 16 || i == 17 || i == 18 || i == 22 || i == 23 || i == 24 || i == 25) {
            cnt++;
            al[i] = s;

            if (cnt == 4) {
                cnt = 0;
                s++;
            }
        } else {
            cnt++;
            al[i] = s;

            if (cnt == 3) {
                cnt = 0;
                s++;
            }
        }
    }

    int sum = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        char c = input[i];
        sum += al[c - 'A'];
    }

    printf("%d\n", sum);
    return 0;
}
