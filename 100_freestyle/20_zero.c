#include <stdio.h>

int main(void) {
    // Declared separately at the top, just like the manual
    int i, j;
    
    // We lock the grids strictly to 3 rows and 3 columns
    int A[3][3], B[3][3], C[3][3];

    printf("--- 3x3 MATRIX ADDITION ---\n\n");

    // 1. Load Matrix A
    printf("Enter 9 elements for Matrix A:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // 2. Load Matrix B
    printf("Enter 9 elements for Matrix B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // 3. The Addition Engine
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            // Adds the exact matching slots together
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // 4. Print the Final Matrix
    printf("\n--- Resultant Matrix C (A+B) ---\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            // \t adds a clean tab space between numbers
            printf("%d\t", C[i][j]);
        }
        // Drops to a new line after finishing a row of 3
        printf("\n"); 
    }

    return 0;
}
