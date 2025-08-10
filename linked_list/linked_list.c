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


int getLength(const LinkedList *l){
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


Node* getLastNode(const LinkedList *l){
    if(getLength(l) == 0){
        return NULL;
    }

    Node *current_node = l->first;
    while(current_node->next_node != NULL){
        current_node = current_node->next_node;
    }
    return current_node;
}


Node* search(const LinkedList *l, int val){
    Node *current_node = l->first;
    while(1){
        if(current_node == NULL){ // Should be a first condition to not dereference a null pointer
            printf("Search: %d not found\n", val);
            return NULL;
        }
        if(current_node->value == val){
            printf("Search: %d found\n", val);
            return current_node;
        }
        else {
            current_node = current_node->next_node;
        }
    }
}

void insert(LinkedList *l, int val){
    Node *new_node = (Node*) malloc(sizeof(Node));
    if(!new_node){
        printf("Insert: error. Allocation failed\n");
        return;
    }
    
    if(search(l, val) != NULL){
        printf("Insert: error, %d is already in the linked list\n", val);
        return;
    }

    new_node->value = val;
    new_node->next_node = NULL;
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

void delete(LinkedList *l, int val){
    Node *current_node = l->first;
    
    while (1) {
        if(current_node == NULL || !l){
            // Empty or invalid linked list 
            printf("Delete: link-list is empty\n");
            return;
        }
        else if(current_node->value == val){
            // Delete link list head
            if(current_node->next_node == NULL){
                free(current_node);
                l->first = NULL;
                printf("Delete: %d is the only element. Linked list is now empty\n", val);
            }
            else{
                l->first = current_node->next_node;
                free(current_node);
                printf("Delete: %d was the first element.\n", val);
            }
            return;
        }
        else if(current_node->next_node == NULL){
            printf("Delete: %d not found\n", val);
            return;
        }
        else if(current_node->next_node->value == val){
            // Delete node between 2 nodes
            Node *delete_node = current_node->next_node;
            current_node->next_node = current_node->next_node->next_node;
            printf("Delete: %d successfully deleted\n", val);
            free(delete_node);
            return;
        }
        else{
            current_node = current_node->next_node;
        }
    }

    
    
}


int main(){
    LinkedList my_linked_list = init();
    delete(&my_linked_list, 5);
    insert(&my_linked_list, 2);
    delete(&my_linked_list, 2);
    insert(&my_linked_list, 3);
    insert(&my_linked_list, 5);
    delete(&my_linked_list, 3);
    insert(&my_linked_list, 2);
    insert(&my_linked_list, 10);
    insert(&my_linked_list, 15);
    insert(&my_linked_list, 20);
    delete(&my_linked_list, 15);
    delete(&my_linked_list, 20);

    return 0;
}
