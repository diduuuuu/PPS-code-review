#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    
    char s[12]; // 정수를 문자열로 변환하기 위해 충분한 크기로 배열을 할당
    sprintf(s, "%d", x);
    
    int sum = 0;
    for (int i = 0; i < strlen(s); i++) {
        char n[2] = {s[i], '\0'}; // 한 자리의 숫자를 저장하기 위한 문자열 배열
        sum += atoi(n); // 문자열을 정수로 변환하여 누적
    }
    
    if (x % sum != 0) {
        answer = false;
    }
    
    return answer;
}