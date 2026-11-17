#include <stdio.h>

int main(void) {
    int radahn_hits[5] = {25, 30, 15, 40, 50};
    int sum = 0;
    float avg;

    printf("--- RADAHN'S 5-HIT COMBO ---\n");

    for (int i = 0; i < 5; i++) {
        printf("Hit %d: %d damage\n", i, radahn_hits[i]);
        
        // Adding the current hit damage to the total sum[span_0](start_span)[span_0](end_span)
        sum = sum + radahn_hits[i];
    }

    // Computing the average outside the loop and typecasting to float[span_1](start_span)[span_1](end_span)
    avg = (float)sum / 5;

    printf("\nTotal Combo Damage = %d\n", sum);
    printf("Average Damage per Hit = %.2f\n", avg);

    return 0;
}
