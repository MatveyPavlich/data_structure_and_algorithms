#include <stdio.h>
#include <stddef.h>
#define MaxLinkedList 10


typedef struct {
    int data[MaxLinkedList];     // values
    int pointers[MaxLinkedList]; // "next" indices
    int firstNode;               // head index, -1 if empty
    int size;                    // number of used nodes
} LinkedList;

LinkedList init(void) {
    LinkedList l;
    l.firstNode = -1;
    l.size = 0;
    return l;
}

// Insert at head (O(1)). Uses next free index == size.
int insert(LinkedList *l, int val) {
    if (l->size >= MaxLinkedList) {
        printf("Insert: error, linked list is full.\n");
        return -1;
    }

    int idx = l->size;              // next unused slot
    l->data[idx] = val;             // store value
    l->pointers[idx] = l->firstNode; // link to previous head
    l->firstNode = idx;             // new head
    l->size++;

    printf("Insert: %d is written to node %d.\n", val, idx);
    return idx;
}

void print_list(const LinkedList *l) {
    printf("List (size=%d): ", l->size);
    for (int cur = l->firstNode; cur != -1; cur = l->pointers[cur]) {
        printf("[%d] ", l->data[cur]);
    }
    printf("\n");
}

int main(void) {
    LinkedList l = init();

    insert(&l, 2);
    insert(&l, 3);
    insert(&l, 4);

    print_list(&l); // Expected order: 4 -> 3 -> 2

    return 0;
}
