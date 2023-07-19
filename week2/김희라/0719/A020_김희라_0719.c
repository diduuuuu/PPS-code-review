#include <stdio.h>

int main() {
    int in = 0;
    int out = 0;
    int now = 0;

    scanf("%d %d", &out, &in);
    now = in;
    int max = now;

    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &out, &in);
        now = now - out + in;
        if (now > max)
            max = now;
    }

    printf("%d\n", max);

    return 0;
}
