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

struct stack init() {
	struct stack initial_stack = {NULL, 0};
	return initial_stack;
}

void peek(struct stack *s) {
	if (s->size > 0) {
		printf("Peek: %d\n", s->top->value);
	} else {
		printf("Invalid peek operation! Stack is empty.\n");
	}
}

void pop(struct stack *s) {
	if (s->size > 0) {
		int val = s->top->value;
		struct node *temp = s->top;
		s->top = s->top->next;
		free(temp);
		s->size--;
		printf("Pop: %d\n", val);
	} else {
		printf("Invalid pop operation! Stack is empty.\n");
	}
}

void push(struct stack *s, int val) {
	struct node *newNode = malloc(sizeof(struct node));
	newNode->value = val;
	newNode->next = s->top;
	s->top = newNode;
	s->size++;
	printf("Push: %d\n", val);
}

// 🧠 Main loop
void app_loop(struct stack *s) {
	int running = 1;

	while (running) {
		int choice;
		printf("\nChoose operation:\n");
		printf("1. Push\n");
		printf("2. Peek\n");
		printf("3. Pop\n");
		printf("0. Exit\n");
		printf("Choice: ");
		scanf("%d", &choice);

		switch (choice) {
			case 1: {
				int val;
				printf("Enter value to push: ");
				scanf("%d", &val);
				push(s, val);
				break;
			}
			case 2:
				peek(s);
				break;
			case 3:
				pop(s);
				break;
			case 0:
				running = 0;
				break;
			default:
				printf("Invalid choice. Try again.\n");
		}
	}
}

int main(void) {
	struct stack my_first_stack = init();
	app_loop(&my_first_stack);
	return 0;
}
