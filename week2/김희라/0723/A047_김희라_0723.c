#include <stdio.h>

int main() {
    char str[101];
    scanf("%s", str);

    int i = 0;
    while (str[i] != '\0') {
        printf("%c", str[i]);
        i++;
        if (i % 10 == 0) {
            printf("\n");
        }
    }
    
    return 0;
}
