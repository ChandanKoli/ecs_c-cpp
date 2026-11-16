#include <stdio.h>
int main(void)
{
    int i,j;
    printf("pattern of  numbers\n");

    for ( i =1; i <= 10; i++){
        for (j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}