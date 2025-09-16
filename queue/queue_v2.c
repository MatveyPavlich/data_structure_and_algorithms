#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

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
    while (current_node != NULL) {
        if (current_node->value == val)
            return current_node;
        current_node = current_node->next_node;
    }
    return NULL;

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
    }
    else {
        new_node->next_node = q->last_node;
        q->last_node = new_node;
        printf("Insert: SUCCESS, %d is the last node\n", val);
    }

    ++q->size;
    return 0;
}

int delete(Queue *q, int val)
{
    Node *delete_node = search(q, val);
    if(delete_node == NULL) {
        printf("Delete: ERROR, element was not found\n");
        return 1;
    }
    else if(delete_node == q->last_node){
        // Last node to be deleted
        q->last_node = delete_node->next_node;
        printf("Delete: SUCCESS, %d is deleted (last)\n", val);
    }
    else {
        // Middle or head to be deleted
        Node *current_node = q->last_node;
        while(current_node->next_node != delete_node)
            current_node = current_node->next_node;
        
        if(delete_node == q->front_node){
            // Head node
            current_node->next_node = NULL;
            q->front_node = current_node;
            printf("Delete: SUCCESS, %d is deleted (head)\n", val);
        }
        else {
            // Middle node
            current_node->next_node = delete_node->next_node;
            printf("Delete: SUCCESS, %d is deleted (middle)\n", val);
        }
        
    }
    free(delete_node);
    --q->size;
    return 0;
}


int main()
{
    Queue my_queue = init_queue();
    insert(&my_queue, 2);
    insert(&my_queue, 4);
    insert(&my_queue, 2);
    insert(&my_queue, 3);
    delete(&my_queue, 4);
    return 0;
}