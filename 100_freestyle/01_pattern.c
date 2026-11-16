#include <stdio.h>

int main(void) {

    int i, j;

    printf("Today we make patterns\n");
    
    for ( i =  1; i <= 10; i++) {
        for ( j = 1; j <= i; j++){
            printf("o ");
        }
        printf("\n");
    }
    return 0;
}
