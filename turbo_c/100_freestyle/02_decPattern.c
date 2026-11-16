#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j;

    clrscr();

    printf("We print decreasing pattern");

    for (i = 10; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("o");
        }
        printf("\n");
    }

    getch();
}
