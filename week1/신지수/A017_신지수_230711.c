#include <stdio.h>

int main() {
    int count[10] = {0};
    int N, set=0;

    scanf("%d", &N);

    while(N>0) {
        count[N%10]++;
        N /= 10;
    }
    count[6] = (count[6] + count[9] + 1) / 2;

    for (int i=0; i<9; ++i) {
        if(set < count[i]) set = count[i];
    }

    printf("%d", set);

    return 0;
}
