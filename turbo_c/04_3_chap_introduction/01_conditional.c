#include <stdio.h>
#include <conio.h>

void main()
{
    int age;

    clrscr();

    scanf("%d", &age);

    if (age > 10) {
        printf("We are inside if\n");
        printf("Your age is greater than 10\n");
    }
    if (age % 5 == 0) {
        printf("We are inside another if\n");
        printf("Your age is divisible by 5\n");
    }

    getch();
}
