#include "stdint.h"
#include "stdio.h"
#include "stdlib.h"

typedef struct node {
    int value;
    struct node *next_node;

} Node;

typedef struct {
    int size;
    Node *last_node;
    Node *front_node;
} Queue;

Queue init_queue()
{
    printf("init_queue: New queue created\n");
    return (Queue){0, NULL, NULL};    
}

Node *search(Queue *q, int val)
{
    if(q->size == 0)
        return NULL;

    Node *current_node = q->last_node;
    while(current_node->value != val){
        if(current_node->next_node == q->front_node)
            return NULL;
        
        current_node = current_node->next_node;
    
    }

    return current_node;

} 

int insert(Queue *q, int val)
{
    if(search(q, val) != NULL){
        printf("Insert: ERROR, %d is already in the queue\n", val);
        return 1;
    }

    Node *new_node = malloc(sizeof(Node));
    new_node->value = val;

    if(q->size == 0) {
        q->front_node = q->last_node = new_node;
        new_node->next_node = NULL;
        printf("Insert: SUCCESS, %d is the first node\n", val);
        return 0;
    }
    else {
        new_node->next_node = q->last_node;
        q->last_node = new_node;
        printf("Insert: SUCCESS, %d is the last node\n", val);
        return 0;
    }

}


int main()
{
    Queue my_queue = init_queue();
    insert(&my_queue, 2);
    insert(&my_queue, 4);
    insert(&my_queue, 2);
    return 0;
}