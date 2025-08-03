/*==== Implementation of the Binary Search Tree (BSA) ====*/


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

// struct node* recursion(struct node *current_node, struct node *new_node, int val){
//     if(val < current_node->value){
//         if(current_node->left == NULL){
//             current_node->left = new_node;
//             current_node = new_node;
//         }else{
//             current_node = current_node->left;
//         }
//     }else{
//         if(current_node->right == NULL){
//             current_node->right = new_node;
//             current_node = new_node;
//         }
//         current_node = current_node->right;
//     }
//     return current_node;
// }

void insert(struct binary_tree *b, int val){
    struct node *new_node = malloc(sizeof(struct node));
    new_node->value = val;
    new_node->left = NULL;
    new_node->right = NULL;

    struct node *current = b->root;

    if(b->root == NULL){
        b->root = new_node;
        printf("Insert: %d is the first value\n", val);
        return;
    }
    
    // while(current_node != new_node){
    //     struct node *current_node = recursion(current_node, new_node, val);
    // }

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
    return 0;
}

