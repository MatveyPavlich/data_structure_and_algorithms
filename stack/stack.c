#include <stdio.h>

struct node {
	int value;
	struct node *next;
};


int main(void){
	
	struct node test1;
	test1.value = 10;
	
	struct node test2;
	test2.value = 20;
	test1.next = &test2;

	// printf("Test1: next address: %d\n", test1.next);
	// printf("Test2: actual address: %p\n", &test2);
	
	printf("Test2 value: %d\n", test2.value);
	printf("Test1 value of Test2: %d\n", test1.next->value); 
	

	return 0;
}
