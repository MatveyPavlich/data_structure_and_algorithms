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

void push(struct stack *s, int val){
	struct node *newNode = malloc(sizeof(struct node));
	if (s->size == 0){
		newNode -> value = val;
		newNode -> next = NULL;

		s -> top = newNode;
		s -> size++;
	} else{
		newNode -> value = val;
		newNode -> next = s -> top;
		s -> top = newNode;

		s -> size++;
	}
	printf("%d\n", s -> top -> value);
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

	return 0;
}
