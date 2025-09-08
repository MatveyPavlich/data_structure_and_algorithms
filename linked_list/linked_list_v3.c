#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node *next_node;
} Node;

typedef struct {
    int length;
    Node *first_node;
} LinkedList;


LinkedList intit_liked_list(void) {
    return (LinkedList) {0, NULL};
}

Node *search(LinkedList *l, int value){
    if(l->length == 0) {
        printf("Search: ERROR, list is empty\n");
        return NULL;
    }

    Node *current_node = l->first_node;
    while (current_node->val != value){
        if(current_node->next_node == NULL) {
            printf("Search: ERROR, %d not found\n", value);
            return  NULL;
        }
        current_node = current_node->next_node;
    }

    printf("Search: element %d found\n", value);
    return current_node;
}


void insert(LinkedList *l, int value){
    if(search(l, value) != NULL) {
        printf("Insert: ERROR, value already in the list\n");
        return;
    }

    Node *new_node = malloc(sizeof(Node));
    if (!new_node) {
        perror("Insert: malloc failed");
        exit(EXIT_FAILURE);
    }

    new_node->next_node = NULL;
    new_node->val = value;

    ++l->length;
    Node *current_node = l->first_node;

    if(l->length == 1){
        l->first_node = new_node;
        return;
    }

    while(current_node->next_node != NULL)
        current_node = current_node->next_node;
    current_node->next_node = new_node;
    printf("Insert: %d\n", value);
}


void delete(LinkedList *l, int value){
    Node *node_to_delete = search(l, value);

    if(node_to_delete == NULL) {
        printf("Delete: ERROR, node with %d not found\n", value);
        return;
    }

    if(l->length == 1){
        // Deleting the only node in the list
        free(node_to_delete);
        --l->length;
        l->first_node = NULL;
        printf("Delete: %d success (only node in LL)\n", value);
    }

    Node *current_node = l->first_node;
        
    while(current_node->next_node == node_to_delete)
        current_node = current_node->next_node;

    if(node_to_delete->next_node == NULL){
        // Deleting terminal node
        
        current_node->next_node = NULL;
        free(node_to_delete);
        --l->length;
        printf("Delete: %d success (end node))\n", value);
    }
    else {
        // Delete middle node
        current_node->next_node = node_to_delete->next_node;
        free(node_to_delete);
        --l->length;
        printf("Delete: %d success (middle node)\n", value);
    }
}


int main(){
    printf("test initial files\n");
    LinkedList l = intit_liked_list();
    insert(&l, 2);
    delete(&l, 5);
    insert(&l, 2);
    insert(&l, 4);
    delete(&l, 5);
    delete(&l, 4);
    insert(&l, 4);
    insert(&l, 5);
    search(&l, 4);
    search(&l, 10);
    insert(&l, 6);
    delete(&l, 5);
    return 0;
}