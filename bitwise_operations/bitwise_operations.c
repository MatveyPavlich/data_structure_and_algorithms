#include <stdio.h>

/*
GdtDescriptor d = {0};
    if (limit > 0xFFFFF) {
        flags |= GDT_FLAG_GRAN_4K;                // set G
        limit = (limit + 0x0FFFu) >> 12;          // bytes -> 4KiB units (ceil)
    }

    limit &= 0xFFFFFu;                           // Clamp to 20-bits using a mask

    d.low_limit = (uint16_t)(limit & 0xFFFFu);
    d.low_base  = (uint16_t)(base & 0xFFFFu);
    d.mid_base  = (uint8_t)((base >> 16) & 0xFFu);
    d.access_bytes = access;
    d.flags_and_high_limit =
        (uint8_t)((flags & 0xF0u) | ((limit >> 16) & 0x0Fu));
    d.high_base = (uint8_t)((base >> 24) & 0xFFu);

    return d;
}

*/

void print_binary(unsigned int num) {
    for (int i = 31; i >= 0; i--) {
        putchar((num & (1u << i)) ? '1' : '0');
        if (i % 4 == 0) putchar(' '); // spacing every nibble
    }
    putchar('\n');
}

typedef struct node {
    int val;                // 4 bytes
    struct node *next_node; // 8 bytes (no shit, 64 bits)
    struct node *prev_node; // 8 bytes (no shit, 64 bits)
} Node;

int main() {

    // unsigned int num = 0xABCD;
    int size = sizeof(Node);
    printf("Size of int: %ld\n", sizeof(int));
    printf("Node size: %d\n", size);

    // printf("Hex with prefix: 0x%X\n", num); // 0x1234ABCD

    // printf("Binary of 0x%X:\n", num);
    // print_binary(num);

    return 0;
}
