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

void insert(LinkedList *l, int value){
    Node *new_node = malloc(sizeof(Node));
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

int search(LinkedList *l, int value){
    if(l->length == 0) {
        printf("Search: ERROR, list is empty\n");
        return 1;
    }

    Node *current_node = l->first_node;
    while (current_node->val != value){
        if(current_node->next_node == NULL) {
            printf("Search: ERROR, %d not found\n", value);
            return  1;
        }
        current_node = current_node->next_node;
    }

    printf("Search: element %d found\n", value);
    return 0;
}

int main(){
    printf("test initial files\n");
    LinkedList l = intit_liked_list();
    insert(&l, 2);
    insert(&l, 4);
    insert(&l, 5);
    search(&l, 4);
    search(&l, 10);
    return 0;
}