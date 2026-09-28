#include <stdio.h>
#include <conio.h>

void main() {
    int radius;
    clrscr();

    printf("Enter Radius of circle\n");
    scanf("%d", &radius);
    printf("Area of circle is %.2f Unit Square\n", 3.14 * radius * radius);

    getch();
}
