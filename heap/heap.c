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

void push(struct queue *q, int val){
    
}



int main(){
    return 0;
}
