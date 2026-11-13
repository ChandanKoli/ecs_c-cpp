#include <stdio.h>
#include <conio.h>

void main()
{
    int i = -4, j, num;

    clrscr();

    j = (num < 0 ? 0 : num * num);
    printf("%d\n", j);

    getch();
}
