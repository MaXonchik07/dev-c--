#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct Stack {
    int arr[MAX];
    int top;
} Stack;

void initStack(Stack* s) {
    s->top = -1;
}

int isFull(Stack* s) {
    return s->top == MAX - 1;
}

int isEmpty(Stack* s) {
    return s->top == -1;
}

void push(Stack* s, int value) {
    if (!isFull(s)) {
        s->arr[++(s->top)] = value;
    }
}

int pop(Stack* s) {
    if (!isEmpty(s)) {
        return s->arr[(s->top)--];
    }
    return -1; // или другое значение для обозначения ошибки
}

int peek(Stack* s) {
    if (!isEmpty(s)) {
        return s->arr[s->top];
    }
    return -1; // или другое значение для обозначения ошибки
}

void sortStack(Stack* S1) {
    Stack S2;
    Stack S3;
    
    initStack(&S2);
    initStack(&S3);

    while (!isEmpty(S1)) {
    
        while (!isEmpty(&S2) && peek(&S2) > pop(S1)) {
            push(&S3, pop(&S2));
        }

        push(&S2, pop(S1));

        while (!isEmpty(&S3)) {
            push(&S2, pop(&S3));
        }
    }

    while (!isEmpty(&S2)) {
        push(S1, pop(&S2));
    }
}

void printStack(Stack* s) {
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}

int main() {
    Stack S1;
    
    initStack(&S1);
    
    // Пример добавления элементов в стек
    push(&S1, 34);
    push(&S1, 3);
    push(&S1, 31);
    push(&S1, 98);
    
    printf("Исходный стек: ");
    printStack(&S1);
    
    sortStack(&S1);
    
    printf("Отсортированный стек: ");
    printStack(&S1);
    
    return 0;
}
