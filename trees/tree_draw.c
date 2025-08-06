//  Code adopted from https://stackoverflow.com/questions/801740/c-how-to-draw-a-binary-tree-to-the-console

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define MAX_HEIGHT 1000
#define INFINITY (1<<20)
#define MIN(X,Y) (((X)<(Y)) ? (X) : (Y))
#define MAX(X,Y) (((X)>(Y)) ? (X) : (Y))

int lprofile[MAX_HEIGHT];
int rprofile[MAX_HEIGHT];
int print_next;

int gap = 3;

struct node {
    struct node *left;   // left child
    struct node *right;  // right child
    int value;
};

// ASCII tree node
typedef struct asciinode_struct {
    struct asciinode_struct *left, *right;
    int edge_length;
    int height;
    int lablen;
    int parent_dir;
    char label[11];
} asciinode;

void compute_lprofile(asciinode *node, int x, int y);
void compute_rprofile(asciinode *node, int x, int y);

void print_level(asciinode *node, int x, int level) {
    int i, isleft;
    if (node == NULL) return;
    isleft = (node->parent_dir == -1);
    if (level == 0) {
        for (i = 0; i < (x - print_next - ((node->lablen - isleft) / 2)); i++)
            printf(" ");
        print_next += i;
        printf("%s", node->label);
        print_next += node->lablen;
    } else if (node->edge_length >= level) {
        if (node->left != NULL) {
            for (i = 0; i < (x - print_next - level); i++)
                printf(" ");
            print_next += i;
            printf("/");
            print_next++;
        }
        if (node->right != NULL) {
            for (i = 0; i < (x - print_next + level); i++)
                printf(" ");
            print_next += i;
            printf("\\");
            print_next++;
        }
    } else {
        print_level(node->left, x - node->edge_length - 1, level - node->edge_length - 1);
        print_level(node->right, x + node->edge_length + 1, level - node->edge_length - 1);
    }
}

void compute_edge_lengths(asciinode *node) {
    int h, hmin, i, delta;
    if (node == NULL) return;

    compute_edge_lengths(node->left);
    compute_edge_lengths(node->right);

    if (node->right == NULL && node->left == NULL) {
        node->edge_length = 0;
    } else {
        if (node->left != NULL) {
            for (i = 0; i < node->left->height && i < MAX_HEIGHT; i++)
                rprofile[i] = -INFINITY;
            compute_rprofile(node->left, 0, 0);
            hmin = node->left->height;
        } else {
            hmin = 0;
        }

        if (node->right != NULL) {
            for (i = 0; i < node->right->height && i < MAX_HEIGHT; i++)
                lprofile[i] = INFINITY;
            compute_lprofile(node->right, 0, 0);
            hmin = MIN(node->right->height, hmin);
        } else {
            hmin = 0;
        }

        delta = 4;
        for (i = 0; i < hmin; i++) {
            delta = MAX(delta, gap + 1 + rprofile[i] - lprofile[i]);
        }

        if (((node->left != NULL && node->left->height == 1) ||
             (node->right != NULL && node->right->height == 1)) && delta > 4)
            delta--;

        node->edge_length = ((delta + 1) / 2) - 1;
    }

    h = 1;
    if (node->left != NULL)
        h = MAX(node->left->height + node->edge_length + 1, h);
    if (node->right != NULL)
        h = MAX(node->right->height + node->edge_length + 1, h);
    node->height = h;
}

asciinode *build_ascii_tree_recursive(struct node *t) {
    asciinode *node;
    if (t == NULL) return NULL;
    node = malloc(sizeof(asciinode));
    node->left = build_ascii_tree_recursive(t->left);
    node->right = build_ascii_tree_recursive(t->right);

    if (node->left != NULL) node->left->parent_dir = -1;
    if (node->right != NULL) node->right->parent_dir = 1;

    sprintf(node->label, "%d", t->value);
    node->lablen = strlen(node->label);
    return node;
}

asciinode *build_ascii_tree(struct node *t) {
    asciinode *node;
    if (t == NULL) return NULL;
    node = build_ascii_tree_recursive(t);
    node->parent_dir = 0;
    return node;
}

void free_ascii_tree(asciinode *node) {
    if (node == NULL) return;
    free_ascii_tree(node->left);
    free_ascii_tree(node->right);
    free(node);
}

void compute_lprofile(asciinode *node, int x, int y) {
    int i, isleft;
    if (node == NULL) return;
    isleft = (node->parent_dir == -1);
    lprofile[y] = MIN(lprofile[y], x - ((node->lablen - isleft) / 2));
    if (node->left != NULL) {
        for (i = 1; i <= node->edge_length && y + i < MAX_HEIGHT; i++)
            lprofile[y + i] = MIN(lprofile[y + i], x - i);
    }
    compute_lprofile(node->left, x - node->edge_length - 1, y + node->edge_length + 1);
    compute_lprofile(node->right, x + node->edge_length + 1, y + node->edge_length + 1);
}

void compute_rprofile(asciinode *node, int x, int y) {
    int i, notleft;
    if (node == NULL) return;
    notleft = (node->parent_dir != -1);
    rprofile[y] = MAX(rprofile[y], x + ((node->lablen - notleft) / 2));
    if (node->right != NULL) {
        for (i = 1; i <= node->edge_length && y + i < MAX_HEIGHT; i++)
            rprofile[y + i] = MAX(rprofile[y + i], x + i);
    }
    compute_rprofile(node->left, x - node->edge_length - 1, y + node->edge_length + 1);
    compute_rprofile(node->right, x + node->edge_length + 1, y + node->edge_length + 1);
}

void print_ascii_tree(struct node *t) {
    asciinode *proot;
    int i;
    if (t == NULL) return;
    proot = build_ascii_tree(t);
    compute_edge_lengths(proot);
    for (i = 0; i < proot->height && i < MAX_HEIGHT; i++)
        lprofile[i] = INFINITY;
    compute_lprofile(proot, 0, 0);
    int xmin = 0;
    for (i = 0; i < proot->height && i < MAX_HEIGHT; i++)
        xmin = MIN(xmin, lprofile[i]);
    for (i = 0; i < proot->height; i++) {
        print_next = 0;
        print_level(proot, -xmin, i);
        printf("\n");
    }
    free_ascii_tree(proot);
}
