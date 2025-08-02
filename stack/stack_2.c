#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next_node;
};

struct stack {
	int size;
	struct node *top_node;
};

struct stack init(){
	struct stack initialised_stack = {0, NULL};
	return initialised_stack;
};

void push(struct stack *s, int pushed_value){
	
	// struct node new_node = {pushed_value, NULL};
	struct node *new_node = malloc(sizeof(struct node)); // will be accessed at runtime => need malloc()
	new_node->value = pushed_value;	
	// if(s->size != 0){
	// 	s->top_node->next_node = new_node;
	// } 
	new_node->next_node = s->top_node;
	// s->top_node = &new_node;
	s->top_node = new_node;
	s->size++;
	printf("Push: %d\n", pushed_value);
}


int main(){
	struct stack my_stack = init();
	push(&my_stack, 3);
	push(&my_stack, 8);
	push(&my_stack, 9);
	
	return 0;
}
