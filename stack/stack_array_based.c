#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#define MaxStack 3


typedef struct {
    int stackTop;
    int stackData[MaxStack];
    int stackSize;
} Stack;

Stack initStack(void){
    Stack s;
    s.stackTop = -1;
    s.stackSize = 0;
    return s;
}

void push(Stack *s, int val){
    if(s->stackSize == MaxStack){
        printf("Push: stack overflow\n");
        exit(1);
    }
    
    ++(s->stackSize);
    ++(s->stackTop);
    s->stackData[s->stackTop] = val;
    printf("Push: %d is on the stack.\n", val);
    return;
}

void pop(Stack *s) {
    if(s->stackSize == 0){
        printf("Pop: ERROR. Stack is empty.\n");
        return;
    }

    int poppedEl = s->stackData[s->stackTop];
    --(s->stackSize);
    --(s->stackTop);
    printf("Pop: %d is removed from the stack.\n", poppedEl);
    return;
}


int main(){
    Stack myStack = initStack();
    push(&myStack, 1);
    push(&myStack, 2);
    push(&myStack, 3);
    pop(&myStack);
    push(&myStack, 4);
    return 0;
}


