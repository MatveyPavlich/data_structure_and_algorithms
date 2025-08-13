#include <stdio.h>
#include <stddef.h>

#define maxLinkedList 10
#define rogueValue -9999

typedef struct {
    int top;
    int next[maxLinkedList];
    int data[maxLinkedList];
    int size;

} LinkedList;


LinkedList init() {
    LinkedList l;
    l.top = -1;
    l.size = 0;

    for (int i = 0; i < maxLinkedList; i++)
        l.data[i] = l.next[i] = rogueValue;
    
    return l;
}

void insert(LinkedList *l, int val) {
    if(l->size >= maxLinkedList) {
        printf("Stack overflow\n");
        return;
    }

    if(l->top == -1) {
        ++(l->top);
        l->data[l->top] = val;
    }



}



int main() {
    printf("123");

    LinkedList l = init();

    for (int i = 0; i <= maxLinkedList - 1; i++) 
        printf("El[%d]: %d\n", i, l.data[i]);

    return 0;
}