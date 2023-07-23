#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 10005

typedef struct {
    int digits[MAX_DIGITS];
    int num_digits;
} BigInteger;

void initBigInteger(BigInteger* num) {
    memset(num->digits, 0, sizeof(num->digits));
    num->num_digits = 0;
}

void setBigInteger(BigInteger* num, const char* str) {
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        num->digits[len - 1 - i] = str[i] - '0';
    }
    num->num_digits = len;
}

void addBigInteger(const BigInteger* a, const BigInteger* b, BigInteger* result) {
    int carry = 0;
    int max_len = (a->num_digits > b->num_digits) ? a->num_digits : b->num_digits;

    for (int i = 0; i < max_len; i++) {
        int sum = a->digits[i] + b->digits[i] + carry;
        result->digits[i] = sum % 10;
        carry = sum / 10;
    }

    if (carry > 0) {
        result->digits[max_len] = carry;
        result->num_digits = max_len + 1;
    } else {
        result->num_digits = max_len;
    }
}

void printBigInteger(const BigInteger* num) {
    for (int i = num->num_digits - 1; i >= 0; i--) {
        printf("%d", num->digits[i]);
    }
    printf("\n");
}

int main() {
    char strA[MAX_DIGITS], strB[MAX_DIGITS];
    scanf("%s %s", strA, strB);

    BigInteger A, B, result;
    initBigInteger(&A);
    initBigInteger(&B);
    initBigInteger(&result);

    setBigInteger(&A, strA);
    setBigInteger(&B, strB);

    addBigInteger(&A, &B, &result);

    printBigInteger(&result);

    return 0;
}
