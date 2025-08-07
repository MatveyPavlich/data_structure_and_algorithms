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

void insert(struct BinaryTree *b, int val){
	struct Node *new_node = malloc(sizeof(struct Node));
	new_node->value = val;
	new_node->left = new_node->right = NULL;
	struct Node *current_node = b->root;

	while(1){
		if(current_node == NULL){
			b->root = new_node;
			printf("Insert: %d\n", val);
			return; 
		}
		else if(val < current_node->value){
			current_node = current_node->left;
			return;
		}
		else if(val > current_node->value){
			current_node = current_node->right;
			return;
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
	
	return 0;
}
































