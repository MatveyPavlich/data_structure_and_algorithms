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

void peek(struct stack *s){
	if(s -> size > 0){
		int val = s -> top -> value;
		printf("Peek: %d\n", val);
		return;
	} else{
		printf("Invalid peek operation! Put something onto the stack");
		return;
	}

}

void pop(struct stack *s){
	if(s -> size > 0){
		int val = s -> top -> value; // Save poped value into new val variable
		s -> top = s -> top -> next; // Update stack to the node BELOW
		s -> size--;
		printf("Pop: %d\n", val);
		return;
	} else{
		printf("Invalid pop operation");
		return;
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
	printf("Push: %d\n", val);
	
	return;
};


void app_loop(){
	
	int return_value = 0;
	
	while (return_value = 0){
		opperation_select();
		perform_opperation();
	}


};


int opperation_select(){
	char[] opperations = {"1", "2", "3", "0"};
	char input;

	printf("Select opperation: 1. Push 2. Peek 3.Pop 0. Exit\n");
	printf("Opperationn: ");
	scanf();

	for (i = 0; i++; len){
		if(opperations[i] == input){
			return
		}else{


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
	push(&my_first_stack, 10);
	push(&my_first_stack, 4);
	
	return 0;
}
