#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[42] = {0};

    for (int i = 0; i < 10; i++) {
        int num;
        scanf("%d", &num);
        int remainder = num % 42;
        arr[remainder] = 1;
    }

    int count = 0;
    for (int i = 0; i < 42; i++) {
        if (arr[i] == 1) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
