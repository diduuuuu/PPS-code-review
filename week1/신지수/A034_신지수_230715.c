#include <stdio.h>

int main(void){
    int num = 0;
    int cnt[42] = {0};
    int max = 0;

    for (int i=0; i<10; i++){
        scanf("%d", &num);
        cnt[num % 42]++;
    }

    for (int i=0; i<42; i++){
        if (cnt[i] > 0)
            max++;
    }
    printf("%d", max);

    return 0;
}