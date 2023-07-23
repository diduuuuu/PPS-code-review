#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* number, int k) {
   int length = strlen(number);
    int targetLength = length - k;
    char* result = (char*)malloc((targetLength + 1) * sizeof(char));
    int index = 0;

    for (int i = 0; i < length; i++) {
        while (index > 0 && result[index - 1] < number[i] && k > 0) {
            index--;
            k--;
        }
        result[index++] = number[i];
    }

    result[targetLength] = '\0';

    return result;
}