#include <stdio.h>
#include <stddef.h>
#define MaxLinkedList 10


typedef struct {
	int data[MaxLinkedList];
	int pointers[MaxLinkedList];
 	int firstNode;
	int size;
} LinkedList;

LinkedList init() {
	LinkedList l;
	l.firstNode = -1;
	l.size = 0;
	return l;
}

void insert(LinkedList *l, int val) {
	if(l->size >= MaxLinkedList) {
		printf("Insert: error, linked list is full.\n");
		return;
	}
    
	++(l->firstNode);
	int emptyIndex = l->data[l->firstNode];	
	l->data[emptyIndex] = val;
	printf("Insert: %d is written to position %d.\n", val, emptyIndex);
	return;
} 


int main() {
	LinkedList l = init();
	insert(&l, 2);
	insert(&l, 3);
	insert(&l, 4);
	return 0;
}
