#include <stdio.h>
#include <stdbool.h>

bool is_group_word(char* word) {
    bool used[26] = {false};
    int prev = word[0] - 'a';
    used[prev] = true;

    for (int i = 1; word[i] != '\0'; i++) {
        int current = word[i] - 'a';

        if (prev != current) {
            if (used[current]) {
                return false;
            } else {
                used[current] = true;
                prev = current;
            }
        }
    }

    return true;
}

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;
    for (int i = 0; i < n; i++) {
        char word[101];
        scanf("%s", word);

        if (is_group_word(word)) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
