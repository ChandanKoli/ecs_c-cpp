#include <stdio.h>
#include <conio.h>

void main()
{
    int mode;

    clrscr();

    do {
        printf("\n--- Casio Calculator 911cw ---\n");
        printf("1. Calculator\n");
        printf("2. Matrices\n");
        printf("3. Power Off\n");
        printf("Select mode: ");
        scanf("%d", &mode);

        if (mode == 1) {
            printf("..0\n");
        } else if (mode == 2) {
            printf(" Array... ");
        }
    } while (mode != 3);

    printf("CASIO - BOOST YOUR CURIOSITY.\n");

    getch();
}
