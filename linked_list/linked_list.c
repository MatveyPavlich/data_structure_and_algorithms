#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next_node;
} Node; 

typedef struct {
    Node *first;
} LinkedList;


int getLength(LinkedList *l){
    int n = 0;
    Node *current_node = l->first;
    while (current_node != NULL){
        n++;
        current_node = current_node->next_node;
    }
    return n;
}

LinkedList init(){
    LinkedList initilised_linked_list = {NULL};
    return initilised_linked_list;
}


Node* getLastNode(LinkedList *l){
    if(getLength(l) == 0){
        return NULL;
    }

    Node *current_node = l->first;
    while(current_node->next_node != NULL){
        current_node = current_node->next_node;
    }
    return current_node;
}


Node* search(LinkedList *l, int val){
    Node *current_node = l->first;
    while(1){
        if(current_node == NULL){ // Should be a first condition to not dereference a null pointer
            return NULL;
        }
        if(current_node->value == val){
            return current_node;
        }
        else {
            current_node = current_node->next_node;
            return current_node;
        }
    }
}

void insertNode(LinkedList *l, int val){
    Node *new_node = (Node*)malloc(sizeof(Node));
    new_node->value = val;
    Node *last_node = getLastNode(l);

    if(last_node == NULL){
        l->first = new_node;
        printf("insertNode: %d is the first node\n", val);
        return;
    }
    else {
        last_node->next_node = new_node;
        printf("insertNode: %d inserted after %d\n", val, last_node->value);
    }
}


int main(){
    LinkedList my_linked_list = init();
    insertNode(&my_linked_list, 2);
    insertNode(&my_linked_list, 3);

    return 0;
}
