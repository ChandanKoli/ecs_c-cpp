#include <stdio.h>
#include <conio.h>

void main() {
    int h, r;
    clrscr();

    printf("Enter the radius\n");
    scanf("%d", &r);
    printf("Enter the height\n");
    scanf("%d", &h);

    printf("The Area of Cylinder is %.3f\n", 2.0 * 3.14 * r * h);
    printf("And the Volume of Cylinder is %.3f\n", 3.14 * r * r * h);

    getch();
}
