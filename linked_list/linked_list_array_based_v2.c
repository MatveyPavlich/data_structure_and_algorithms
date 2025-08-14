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

/* ----- helpers ----- */

// find first free slot (where data == rogueValue), else -1
static int findFreeSlot(LinkedList *l) {
    for (int i = 0; i < maxLinkedList; i++)
        if (l->data[i] == rogueValue) return i;
    return -1;
}

LinkedList init() {
    LinkedList l;
    l.top = -1;
    l.size = 0;
    for (int i = 0; i < maxLinkedList; i++)
        l.data[i] = l.next[i] = rogueValue;
    return l;
}

/* insert at tail */
void insert(LinkedList *l, int val) {
    if (l->size >= maxLinkedList) {
        printf("Insert: stack overflow\n");
        return;
    }

    int slot = findFreeSlot(l);
    if (slot == -1) {
        printf("Insert: no free slot\n");
        return;
    }

    l->data[slot] = val;
    l->next[slot] = -1;           // new tail has no next

    if (l->top == -1) {
        // empty list -> this node becomes head
        l->top = slot;
    } else {
        // walk to current tail and link it to new node
        int cur = l->top;
        while (l->next[cur] != -1) cur = l->next[cur];
        l->next[cur] = slot;
    }

    l->size++;
}

/* search: return index of first node with val, or -1 */
int search(LinkedList *l, int val) {
    int cur = l->top;
    while (cur != -1) {
        if (l->data[cur] == val) return cur;
        cur = l->next[cur];
    }
    return -1;
}

/* delete first occurrence of val; return 1 if removed, 0 if not found */
int deleteValue(LinkedList *l, int val) {
    int prev = -1;
    int cur = l->top;

    while (cur != -1) {
        if (l->data[cur] == val) {
            // unlink
            if (prev == -1) {
                // deleting head
                l->top = l->next[cur];
            } else {
                l->next[prev] = l->next[cur];
            }

            // free the node (restore rogues)
            l->data[cur] = rogueValue;
            l->next[cur] = rogueValue;

            l->size--;
            return 1;
        }
        prev = cur;
        cur = l->next[cur];
    }
    return 0;
}

/* debug print */
void printList(LinkedList *l) {
    printf("List(size=%d): ", l->size);
    for (int cur = l->top; cur != -1; cur = l->next[cur]) {
        printf("[%d]=%d -> ", cur, l->data[cur]);
    }
    printf("NULL\n");
}

int main() {
    LinkedList l = init();

    insert(&l, 10);
    insert(&l, 20);
    insert(&l, 30);
    printList(&l);

    int idx = search(&l, 20);
    printf("search(20) -> %d\n", idx);

    deleteValue(&l, 20);
    printList(&l);

    deleteValue(&l, 10);
    printList(&l);

    deleteValue(&l, 42); // not present
    printList(&l);

    return 0;
}
