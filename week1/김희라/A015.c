#include <stdio.h>

int main() {
    int arr[5];

    for (int i = 0; i < 5; i++) {
        int num;
        scanf("%d", &num);
        arr[i] = num * num;
    }

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    int result = sum % 10;

    printf("%d\n", result);

    return 0;
}
