#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

struct Node {
    struct Node *left;
    struct Node *right;
    int value;
};


struct BinaryTree {
    struct Node *root;
};


struct BinaryTree init(){
	struct BinaryTree init_tree = {NULL};
	return init_tree;
};


struct Node* search(struct BinaryTree *b, int val){	
	struct Node *current_node = b->root;
	
	while(current_node != NULL){
		if(val == current_node->value){
			// printf("Search: %d\n", val);
			return current_node;
		}
		else if(val < current_node->value){
			current_node = current_node->left;
		}
		else if(val > current_node->value){
			current_node = current_node->right;
		}
	}
	return NULL;
}



void insert(struct BinaryTree *b, int val){
	struct Node *new_node = malloc(sizeof(struct Node));
	new_node->value = val;
	new_node->left = new_node->right = NULL;
	struct Node *current_node = b->root;

	if(search(b, val) != NULL){
		printf("Search: %d is already in the tree\n", val);
		return;
	}

	while(1){
		if(current_node == NULL){
			b->root = new_node;
			printf("Insert: %d\n", val);
			return; 
		}
		else if(val < current_node->value){
			current_node = current_node->left;	
		}
		else if(val > current_node->value){
			current_node = current_node->right;	
		}
		else {
			printf("insert(): error");
			return;
		}
	}
}


int main(){
    // printf("All good");
	
	struct BinaryTree tree = init();
	insert(&tree, 4);
	insert(&tree, 6);
	insert(&tree, 2);
	// search(&tree, 2);
	insert(&tree,2);
	
	return 0;
}
































