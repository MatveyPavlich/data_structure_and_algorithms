#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

struct node {
	int value;
	struct node *next;
};

struct stack {
	struct node *top;
	int size;
};

struct stack init(){
	// Initiate empty stack
	struct stack initial_stack = {NULL, 0};
	return initial_stack;
};

int peek(struct stack *s){
	if(s -> size > 0){
		return s -> top -> value;
	} else{
		printf("Invalid peek operation! Put something onto the stack");
		return -1;
	}

}

int pop(struct stack *s){
	if(s -> size > 0){
		int val = s -> top -> value; // Save poped value into new val variable
		s -> top = s -> top -> next; // Update stack to the node BELOW
		s -> size--;

		return val;
	} else{
		printf("Invalid pop operation");
		return -1;
	}
}

void push(struct stack *s, int val){
	struct node *newNode = malloc(sizeof(struct node));
	newNode -> value = val;
	
	if (s->size == 0){
		newNode -> next = NULL;
		s -> top = newNode;

	} else{
		newNode -> next = s -> top;
		s -> top = newNode;
	}
	
	s -> size++;
	
	// printf("%d\n", s -> top -> value); // Before peek was implemented
	printf("%d\n", peek(s));
};

int main(void){
	
	struct node test1;
	test1.value = 10;
	
	struct node test2;
	test2.value = 20;
	test1.next = &test2;

	// This is what my initial guess was, I missed that I need to add (void*) in front of test1.next for printf to know the type of variable
	// printf("Test1: next address: %d\n", test1.next);
	// printf("Test2: actual address: %p\n", &test2);
	
	printf("Test1: next address: %p\n", (void*)test1.next);
	printf("Test2: actual address: %p\n", &test2);
	
	printf("Test2 value: %d\n", test2.value);
	printf("Test1 value of Test2: %d\n", test1.next->value); 
	
	struct stack my_first_stack = init();
	push(&my_first_stack, 1);
	push(&my_first_stack, 2);
	pop(&my_first_stack);
	printf("%d\n", peek(&my_first_stack));

	return 0;
}
