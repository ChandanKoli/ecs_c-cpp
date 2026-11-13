#include <stdio.h>

int main(void) {
    int i, j, k;

    printf("right to left pattern\n");

    for (i = 1; i <= 10; i++) {
        // Loop 1: Prints the spaces
        for (k = 10; k > i; k--) {
            printf(" ");
        }

        // Loop 2: Prints the characters
        for (j = 1; j <= i; j++) {
            printf("o");
        }

        // Drops to the next line after finishing the row
        printf("\n");
    }

    return 0;
}
