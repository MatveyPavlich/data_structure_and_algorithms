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
    if(s->stackSize == MaxStack - 1){
        printf("Push: stack overflow\n");
        exit(1);
    }
    
    ++(s->stackSize);
    ++(s->stackTop);
    s->stackData[s->stackTop] = val;
    printf("Push: %d is on the stack.\n", val);
    return;
}


int main(){
    Stack myStack = initStack();
    push(&myStack, 1);
    push(&myStack, 2);
    push(&myStack, 3);
    push(&myStack, 4);
    return 0;
}


