#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();
    printf("%zu bytes\n", sizeof(int));
    printf("%zu bytes\n", sizeof(float));
    printf("%zu bytes\n", sizeof(double));
    printf("%zu bytes\n", sizeof(char));
    getch();
}
