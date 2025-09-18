#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *left_child;
    struct node *right_child;
} Node;

typedef struct {
    Node *root;
} BinaryTree;

BinaryTree init()
{
    return (BinaryTree){NULL};
}

Node *search(BinaryTree *b, int val)
{
    Node *current_node = b->root;

    while (current_node != NULL) {
        if (current_node->value == val) {
            return current_node;
        } else if (val < current_node->value) {
            current_node = current_node->left_child;
        } else {
            current_node = current_node->right_child;
        }
    }

    return NULL; // not found
}


int insert(BinaryTree *b, int val)
{
    if(search(b, val) != NULL){
        printf("Insert: ERROR, %d is already in the list\n", val);
        return 1;
    }

    Node *new_node = malloc(sizeof(Node));
    new_node->value = val;
    new_node->left_child = new_node->right_child = NULL;

    if(b->root == NULL){
        b->root = new_node;
        printf("Insert: root %d created\n", val);
        return 0;
    }

    Node *current_node = b->root;
    while(1){
        if(current_node->value > val && current_node->left_child != NULL)
            current_node = current_node->left_child;
        else if(current_node->value > val){
            current_node->left_child = new_node;
            break;
        }
        else if(current_node->value < val && current_node->right_child != NULL)
            current_node = current_node->right_child;
        else if (current_node->value < val){
            current_node->right_child = new_node;
            break;
        }
        else{
            printf("Insert: ERROR unhandeled case\n");
            return 0;
        }

    }
    printf("Insert: SUCCESS, %d was inserted\n", val);
    return 0;
}

void delete(BinaryTree *b, int val)
{
	Node *delete_node = search(b, val); 
	if(delete_node == NULL){
		printf("Delete: ERROR, %d is not in the tree\n", val);
		return;
	}
	

}

int main()
{
    BinaryTree tree = init();
    insert(&tree, 2);
    insert(&tree, 4);
    insert(&tree, 4);
}
