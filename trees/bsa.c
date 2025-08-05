/*==== Implementation of the Binary Search Tree (BSA) ====*/
// Implemented using linked nodes (not arrays)
// Tree height: log(n) <= h <= n

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>


struct node {
    struct node *left;   // left child
    struct node *right;  // right child
    int value;
};

struct binary_tree {
    struct node *root;
};

struct binary_tree init(){
    struct binary_tree b = {NULL};
    return b;
}



struct node* search(struct binary_tree *b, int val) {
    struct node *current_node = b->root;

    while (current_node != NULL) {
        if (val == current_node->value) {
            printf("Search: %d found in tree.\n", val);
            return current_node;
        } else if (val < current_node->value) {
            current_node = current_node->left;
        } else {
            current_node = current_node->right;
        }
    }

    printf("Search: %d not found in tree.\n", val);
    return NULL;
}


void insert(struct binary_tree *b, int val){
    
    if (search(b, val) != NULL) {
        printf("Insert: %d already exists, skipping insert.\n", val);
        return;
    }
    
    struct node *new_node = malloc(sizeof(struct node));
    // new_node = (struct node *)malloc(sizeof(struct node));
    new_node->value = val;
    new_node->left = new_node->right = NULL;

    struct node *current = b->root;

    if(b->root == NULL){
        b->root = new_node;
        printf("Insert: %d is the first value\n", val);
        return;
    }

    while (1) {
        if (val < current->value) {
            if (current->left == NULL) {
                current->left = new_node;
                printf("Insert: %d to the LEFT of %d\n", val, current->value);
                return;
            } else {
                current = current->left;
            }
        } else {
            if (current->right == NULL) {
                current->right = new_node;
                printf("Insert: %d to the RIGHT of %d\n", val, current->value);
                return;
            } else {
                current = current->right;
            }
        }
    }

}

int main(){
    struct binary_tree tree = init();

    insert(&tree, 5);
    insert(&tree, 3);
    insert(&tree, 20);
    insert(&tree, 25);
    insert(&tree, 3);  // This should be skipped

    struct node *found = search(&tree, 20);
    if (found) {
        printf("Main: search success — value: %d\n", found->value);
    } else {
        printf("Main: search failure\n");
    }

    return 0;
}



// WIP: iplementing searching an element
// void serarch(struct binary_tree *b, int val){

//     struct node *current_node = b->root;
//     if(current_node == NULL){
//         printf("Search: fail, tree is empty.");
//         return;
//     }
//     if(val == current_node->value){
//         printf("Search: element found.");
//     }
// }

// struct node* recursive_search(struct node *n, int val){
//     if(n == NULL){
//         printf("Search: fail, tree is empty.");
//         return NULL;
//     }
//     if(val == n->value){
//         printf("Search: element found.");
//         return n;
//     }
//     if(val < n->value){
//         return recursive_search(n->left, val);
//     }
//     else {
//         return recursive_search(n->right, val);
//     }
// }

// void remove(struct binary_tree *b, int val){
    
//     struct node *current_node = b->root;

    
//     // Find correct node
//     // Remove it
//     // Re-built a tree
// }
