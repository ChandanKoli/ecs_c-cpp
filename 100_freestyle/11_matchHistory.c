#include <stdio.h>

int main (void)
{
    int kills[13]; 
    int i, total_kills = 0;
    printf("--- Match History ---\n");
    for(i = 0; i < 13; i++){
        printf("Enter Round %d kills: \n", i+1);
        scanf("%d", &kills[i]);
        total_kills = total_kills + kills[i];
    }
    printf("\nTotal kills of previous Match: %d\n", total_kills);

    return 0;
}