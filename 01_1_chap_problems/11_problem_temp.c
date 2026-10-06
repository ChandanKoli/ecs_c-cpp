#include <stdio.h>
int main()
{
    float c,f;

    
    printf("Enter Degree Celsius:\n ");
    scanf("%f", &c);
    printf(" %f Celsius in Fahrenheit is %.1f\n", c, c*1.8 + 32);
   
   
    printf("Enter Degree Fahrenheit:\n");
    scanf("%f", &f);
    c = (f-32.0)*(5.00/9.00);
    printf("%.2f Fahrenheit in Celsius is %.2f\n", f, c);

    return 0;

}

