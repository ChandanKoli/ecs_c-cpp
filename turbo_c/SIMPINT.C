#include <stdio.h>
#include <conio.h>

void main() {
    float p, r;
    int t;
    clrscr();

    printf("Enter Principal Amount\n");
    printf("Enter interest rate\n");
    printf("Enter time period\n");
    scanf("%f %f %d", &p, &r, &t);

    printf("The Value of Simple Interest is %f\n", (p * r * t) / 100.0);

    getch();
}
