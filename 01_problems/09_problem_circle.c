#include <stdio.h>

int main()
{
    /*int r = 10;
    printf("Area of the circle of radius %d\n is %f\n", r, 3.14*r*r );
     */
    int  radius;
    printf("Enter Radius of circle\n");
    scanf("%d", &radius);
    printf("Area of circle is %.2f Unit Square \n", 3.14*radius*radius);

    return 0;
}
