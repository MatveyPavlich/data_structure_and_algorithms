/* Try 1: do not store *last and length in LinkedList */


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


void search(LinkedList *l, int val){
    Node *current_node = l->first;
    while(1){
        if(current_node == NULL){ // Should be a first condition to not dereference a null pointer
            printf("Search: %d not found\n", val);
            return;
        }
        if(current_node->value == val){
            printf("Search: %d found\n", val);
            return;
        }
        else {
            current_node = current_node->next_node;
        }
    }
}

void insertNode(LinkedList *l, int val){
    Node *new_node = (Node*)malloc(sizeof(Node));
    if(!new_node){
        printf("Insert: error. Allocation failed\n");
    }

    new_node->value = val;
    Node *last_node = getLastNode(l);
    if(last_node == NULL){
        l->first = new_node;
        printf("Insert: %d is the first node\n", val);
        return;
    }
    else {
        last_node->next_node = new_node;
        printf("Insert: %d inserted after %d\n", val, last_node->value);
    }
}


int main(){
    LinkedList my_linked_list = init();
    insertNode(&my_linked_list, 2);
    insertNode(&my_linked_list, 3);
    insertNode(&my_linked_list, 5);
    search(&my_linked_list, 2);
    search(&my_linked_list, 1);

    return 0;
}
