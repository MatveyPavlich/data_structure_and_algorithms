#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#define MaxStackSize 10


typedef struct {
    int StackTop;
    int StackData[MaxStackSize];
} Stack;

Stack init() {
    Stack s;
    s.StackTop = -1;
    return s;
}

/*
Stack* init() {
    Stack *s = (Stack*)malloc(sizeof(Stack));
    if(!s) {
        perror("Failed to allocate stack\n");
        exit(EXIT_FAILURE);
    }
    s->StackTop = -1;
    s->StackSize = 0;
    return s;
}
*/

void push(Stack *s, int val) {
    if(s->StackTop >= MaxStackSize - 1){
        printf("Push: ERROR. Stack overflow.\n");
        exit(EXIT_FAILURE);
    }

    ++(s->StackTop);
    s->StackData[s->StackTop] = val;
    printf("Push: %d is pushed onto the stack.\n", val);
    return;
}

void pop(Stack *s) {
    if(s->StackTop == -1) {
        printf("Pop: ERROR. Stack is empty.\n");
        exit(EXIT_FAILURE);
    }

    printf("Pop: element %d popped.\n", s->StackData[s->StackTop]);
    --(s->StackTop);
    return;    
}

void peek(Stack *s) {
    if(s->StackTop == -1) {
        printf("Peek: ERROR. Stack is empty.\n");
        exit(EXIT_FAILURE);
    }

    printf("Peek: %d is on the stack.\n", s->StackData[s->StackTop]);
    return;
}


int main() {
    
    Stack my_stack = init();
    push(&my_stack, 1);
    push(&my_stack, 2);
    push(&my_stack, 3);
    peek(&my_stack);
    pop(&my_stack);
    return 0;
}