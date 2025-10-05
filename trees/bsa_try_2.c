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



void inorder(Node* root)
{
    // TODO: add \n at the end   
    if (root == NULL) return;
    inorder(root->left_child);
    printf("%d ", root->value);
    inorder(root->right_child);
}



// helper: find minimum value node in a subtree
Node* find_min(Node* root)
{
    while (root->left_child != NULL) {
        root = root->left_child;
    }
    return root;
}

// recursive delete
Node* delete_recursive(Node* root, int val)
{
    if (root == NULL) return root;

    if (val < root->value) {
        root->left_child = delete_recursive(root->left_child, val);
    } else if (val > root->value) {
        root->right_child = delete_recursive(root->right_child, val);
    } else {
        // Case 1: no child
        if (root->left_child == NULL && root->right_child == NULL) {
            free(root);
            return NULL;
        }
        // Case 2: one child
        else if (root->left_child == NULL) {
            Node* temp = root->right_child;
            free(root);
            return temp;
        } else if (root->right_child == NULL) {
            Node* temp = root->left_child;
            free(root);
            return temp;
        }
        // Case 3: two children
        Node* temp = find_min(root->right_child);
        root->value = temp->value;
        root->right_child = delete_recursive(root->right_child, temp->value);
    }
    return root;
}

void delete(BinaryTree *b, int val)
{
    if (search(b, val) == NULL) {
        printf("Delete: ERROR, %d not found\n", val);
        return;
    }
    b->root = delete_recursive(b->root, val);
    printf("Delete: SUCCESS, %d removed\n", val);
}

int main()
{
    BinaryTree tree = init();
    insert(&tree, 2);
    insert(&tree, 4);
    insert(&tree, 4);
    inorder(tree.root);
    insert(&tree, 1);
    insert(&tree, 10);
    insert(&tree, 7);
    inorder(tree.root);
    delete(&tree, 2);
    inorder(tree.root);
}
