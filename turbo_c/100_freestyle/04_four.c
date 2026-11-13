#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, k;

    clrscr();

    printf("right to left pattern\n");

    for (i = 1; i <= 10; i++) {
        for (k = 10; k > i; k--) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("0");
        }
        printf("\n");
    }

    getch();
}
