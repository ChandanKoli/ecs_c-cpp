#include <stdio.h>
#include <conio.h>

void main()
{
    float p,r ;
    int t;
    clrscr();

    printf("Enter Principal Amount \n" "Enter interest rate\n" "Enter time period\n");
    scanf("%f" "%f" "%d", &p, &r, &t);



    printf("The Value of Simple Interest is %f\n", (p*r*t)/100);
    
    getch();
}
