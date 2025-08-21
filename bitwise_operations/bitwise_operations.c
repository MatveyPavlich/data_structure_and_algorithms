#include <stdio.h>

void print_binary(unsigned int num) {
    for (int i = 31; i >= 0; i--) {
        putchar((num & (1u << i)) ? '1' : '0');
        if (i % 4 == 0) putchar(' '); // spacing every nibble
    }
    putchar('\n');
}

int main() {
    unsigned int num = 0xABCD;

    printf("Hex with prefix: 0x%X\n", num); // 0x1234ABCD

    printf("Binary of 0x%X:\n", num);
    print_binary(num);

    return 0;
}
