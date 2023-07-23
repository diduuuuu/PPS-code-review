#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10001

typedef struct {
    int arr[MAX_SIZE];
    int top;
} Stack;

void init(Stack* stack) {
    stack->top = -1;
}

void push(Stack* stack, int x) {
    stack->top++;
    stack->arr[stack->top] = x;
}

int pop(Stack* stack) {
    if (stack->top == -1) {
        return -1;
    }
    int value = stack->arr[stack->top];
    stack->top--;
    return value;
}

int size(Stack* stack) {
    return stack->top + 1;
}

int empty(Stack* stack) {
    return stack->top == -1 ? 1 : 0;
}

int top(Stack* stack) {
    if (stack->top == -1) {
        return -1;
    }
    return stack->arr[stack->top];
}

int main() {
    Stack stack;
    init(&stack);

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char s[10];
        scanf("%s", s);

        if (strcmp(s, "push") == 0) {
            int x;
            scanf("%d", &x);
            push(&stack, x);
        } else if (strcmp(s, "pop") == 0) {
            printf("%d\n", pop(&stack));
        } else if (strcmp(s, "size") == 0) {
            printf("%d\n", size(&stack));
        } else if (strcmp(s, "empty") == 0) {
            printf("%d\n", empty(&stack));
        } else if (strcmp(s, "top") == 0) {
            printf("%d\n", top(&stack));
        }
    }

    return 0;
}
