#include <stdio.h>

int main(void) {
    int r, c;
    
    // We create three 10x10 grids in memory just to be safe.
    // A and B are the inputs, C will hold the final math.
    int A[10][10], B[10][10], C[10][10];

    // 1. Set the Grid Size (e.g., 2 rows, 3 columns)
    printf("Enter rows and columns for matrix: ");
    scanf("%d %d", &r, &c);

    // 2. Load Matrix A
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < r; i++) {           // Outer loop: Rows
        for (int j = 0; j < c; j++) {       // Inner loop: Columns
            scanf("%d", &A[i][j]);
        }
    }

    // 3. Load Matrix B
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < r; i++) {           
        for (int j = 0; j < c; j++) {       
            scanf("%d", &B[i][j]);
        }
    }

    // 4. The Addition Engine
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            // Adds the exact matching slots together[span_5](start_span)[span_5](end_span)
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // 5. Print the Final Matrix
    printf("\n--- Resultant Matrix C (A+B) ---\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            // \t adds a clean tab space between numbers[span_6](start_span)[span_6](end_span)
            printf("%d\t", C[i][j]);
        }
        printf("\n"); // Drops to a new line after finishing a row[span_7](start_span)[span_7](end_span)
    }

    return 0;
}
