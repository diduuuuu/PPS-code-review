#include <stdio.h>

int main() {
    int score[5];

    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            int num;
            scanf("%d", &num);
            sum += num;
        }
        score[i] = sum;
    }

    int win = 0;
    int p = 0;
    for (int i = 0; i < 5; i++) {
        if (score[i] > win) {
            win = score[i];
            p = i + 1;
        }
    }

    printf("%d %d\n", p, win);

    return 0;
}
