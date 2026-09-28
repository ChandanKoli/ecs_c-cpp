#include <stdio.h>
#include <conio.h>

void main() {
    float c, f;
    clrscr();

    printf("Enter Degree Celsius:\n ");
    scanf("%f", &c);
    printf("%f Celsius in Fahrenheit is %.1f\n", c, c * 1.8 + 32.0);
   
    printf("Enter Degree Fahrenheit:\n");
    scanf("%f", &f);
    c = (f - 32.0) * (5.0 / 9.0);
    printf("%.2f Fahrenheit in Celsius is %.2f\n", f, c);

    getch();
}
