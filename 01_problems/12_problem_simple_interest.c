#include<stdio.h>

int main()
{
    float p,r ;
    int t;

    printf("Enter Principal Amount \n" "Enter interest rate\n" "Enter time period\n");
    scanf("%f" "%f" "%d", &p, &r, &t);



    printf("The Value of Simple Interest is %f\n", (p*r*t)/100);
    return 0;
}

// converted