#include <stdio.h>
#include <conio.h>

void main() {
    int length, width;
    clrscr();

    printf("Enter the length\n");
    scanf("%d", &length);
    printf("Enter the width\n");
    scanf("%d", &width);
    printf("Area of rectangle is %d Unit Square\n", length * width);
    
    getch();
}
