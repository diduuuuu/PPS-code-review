#include <stdio.h>

int APT[15][15];

void make_APT() {
    for (int i = 0; i < 15; i++) {
        APT[i][1] = 1;
        APT[0][i] = i;
    }

    for (int i = 1; i < 15; i++) {
        for (int j = 2; j < 15; j++) {
            APT[i][j] = APT[i][j - 1] + APT[i - 1][j];
        }
    }
}

int main() {
    make_APT();

    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int k, n;
        scanf("%d %d", &k, &n);
        printf("%d\n", APT[k][n]);
    }

    return 0;
}
