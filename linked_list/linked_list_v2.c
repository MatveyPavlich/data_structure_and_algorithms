#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>


typedef struct node {
    int value;
    struct node *next_node;
} Node;

typedef struct {
    Node *first_node;
    Node *last_node;
    int length;
} LinkedList;

LinkedList init(){
    LinkedList initiated_linked_list = {NULL, NULL, 0};
    return initiated_linked_list;
}

Node* search(LinkedList *l, int val){
    Node *current_node = l->first_node;
    
    while(current_node != NULL){
        if(current_node->value == val){
            printf("Search: %d found.\n", val);
            return current_node;
        }
        else{
            current_node = current_node->next_node;
        }
    }

    printf("Search: %d not found.\n", val);
    return NULL;
}

void insert(LinkedList *l, int val){
    Node *new_node = (Node*)malloc(sizeof(Node));
    if(!new_node){
        printf("Insert: malloc failed. Opperation aborted.\n");
        return;
    }

    if(search(l, val) != NULL){
        printf("Insert: error. %d is already in the list.\n", val);
        return;
    }

    new_node->value = val;
    new_node->next_node = NULL;
    if(l->first_node == NULL){
        l->first_node = l->last_node = new_node;
        printf("Insert: %d is the first node.\n", val);
    }
    else{
        Node *old_last_node = l->last_node;
        old_last_node->next_node = new_node;
        l->last_node = new_node;
        printf("Insert: %d is added after %d.\n", val, old_last_node->value);
    }

    l->length++;
    return;
}


void delete(LinkedList *l, int val){
    if(!l || l->length == 0){
        printf("Delete: ERROR, linked list is not initialised or empty.\n");
        return;
    }
    
    if(search(l, val) == NULL){
        printf("Delete: ERROR, %d is not in the list.\n", val);
        return;
    }
    
    Node *current_node = l->first_node;
    if(current_node->value == val){
        if(l->length == 1){
            l->first_node = l->last_node = NULL;
            printf("Delete: %d, the only element, was deleted.\n", val);
        }
        else{
            l->first_node = current_node->next_node;
            printf("Delete: first element %d.\n", val);
        }
        free(current_node);
        return;
    }
    while(1){
        if(current_node->next_node->value == val){
            if(current_node->next_node == l->last_node){
                free(current_node->next_node);
                current_node->next_node = NULL;
                l->last_node = current_node;
                printf("Delete: last element %d deleted.\n", val);
                return;
            }
            else{
                Node *delete_node = current_node->next_node;
                current_node->next_node = delete_node->next_node;
                printf("Delete: middle element %d deleted.\n", delete_node->value);
                free(delete_node);
                return;
            }
        } // end if
        else{
            current_node = current_node->next_node;
        } // end else
    } // end while
} // end delete


int main(){
    LinkedList my_linked_list = init();
    delete(&my_linked_list, 1);
    
    insert(&my_linked_list, 1);
    delete(&my_linked_list, 1);
    
    insert(&my_linked_list, 1);
    insert(&my_linked_list, 2);
    delete(&my_linked_list, 1);

    insert(&my_linked_list, 1);
    insert(&my_linked_list, 2);
    insert(&my_linked_list, 4);
    insert(&my_linked_list, 5);
    delete(&my_linked_list, 4);
    delete(&my_linked_list, 5);

    return 0;
}

