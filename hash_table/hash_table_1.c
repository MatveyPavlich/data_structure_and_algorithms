#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 100

typedef struct hash_node {
        char* string;
        int value;
} HashNode;

typedef struct {
        HashNode **buckets;
} HashMap;

int main(void)
{
        printf("yo\n");
}
