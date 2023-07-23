#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int j = 0; j < n; j++) {
        char input[81];
        scanf("%s", input);

        int score = 0;
        int sum;

        if (input[0] == 'O') {
            sum = 1;
        } else {
            sum = 0;
        }

        score = sum;

        for (int i = 1; i < strlen(input); i++) {
            if (input[i] == 'O') {
                sum++;
            } else {
                sum = 0;
            }

            score += sum;
        }
        printf("%d\n", score);
    }

    return 0;
}
