#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[8];
    for (int i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }

    int idx[8];
    int max[5];
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        idx[cnt] = arr[i];
        cnt++;
    }

    cnt = 0;
    int sum = 0;
    qsort(arr, 8, sizeof(int), compare);
    for (int i = 3; i < 8; i++) {
        max[cnt] = arr[i];
        sum += max[cnt];
        cnt++;
    }

    printf("%d\n", sum);

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 5; j++) {
            if (idx[i] == max[j]) {
                printf("%d ", i + 1);
            }
        }
    }
    printf("\n");

    return 0;
}
