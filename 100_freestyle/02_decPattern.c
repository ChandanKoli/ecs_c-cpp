#include <stdio.h>

int main(void){
    int i,j;
    printf("We print decreasing pattern");

    for(i =10; i >= 1; i--){
        for( j = 1; j <= i; j++){
            printf("o");
        }
        printf("\n");
    }

    return 0;
}