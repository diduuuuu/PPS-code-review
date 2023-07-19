#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int value = a * b * c;
    char str[10];
    sprintf(str, "%d", value);
    
    for (int i = 0; i < 10; i++) {
        int count = 0;
        for (int j = 0; str[j] != '\0'; j++) {
            if ((str[j] - '0') == i) {
                count++;
            }
        }
        printf("%d\n", count);
    }
    
    return 0;
}
