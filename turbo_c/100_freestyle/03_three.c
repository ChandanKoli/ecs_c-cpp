#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j;

    clrscr();

    printf("pattern of  numbers\n");

    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    getch();
}
