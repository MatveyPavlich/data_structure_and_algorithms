/*
- Way 1: [first_node] -> [node1] -> ... -> [last_node] -> NULL
- Way 2: [first_node] <- [node1] <- ... <- [last_node]
    - Not effective since whenever you dequeue an element to find the new first_node you'll have to traverse linked list from the start.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

struct node {
    struct node *next_node;
    int value;
};

struct queue {
    struct node *first_node;
    struct node *last_node;
    int queue_size;
};

struct queue init(){
    struct queue initialised_queue = {NULL, NULL, 0};
    return initialised_queue;
}

void enqueue(struct queue *q, int pushed_val){
    struct node *new_node = malloc(sizeof(struct node));
    new_node->value = pushed_val;
    new_node->next_node = NULL;

    if(q->queue_size == 0){
        q->first_node = new_node;
        q->last_node = new_node;
    }else{
        q->last_node->next_node = new_node;
        q->last_node = new_node;
    }

    q->queue_size++;
    printf("Enqueue: %d\n", pushed_val);
}

void dequeue(struct queue *q){
    if(q->queue_size > 0){
        struct node *dequed_node = q->first_node;
        int dequeued_val = dequed_node->value;
        q->first_node = q->first_node->next_node;
        free(dequed_node); // Make sure you free the memory you mallocced. Otherwise memo leak
        q->queue_size--;
        printf("Dequeue: %d\n", dequeued_val);
    }else {
        printf("Dequeue: ERROR, queue is empty\n");
    }
}

int main(){
    struct queue my_queue = init();
    enqueue(&my_queue, 2);
    enqueue(&my_queue, 5);
    dequeue(&my_queue);

    return 0;
}
