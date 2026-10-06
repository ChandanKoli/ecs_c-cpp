#include<stdio.h>
int main()
{
    int h, r;
    printf("Enter the radius\n");
    scanf("%d", &r);
    printf("Enter the height\n");
    scanf("%d", &h);

    printf("The Area of Cylinder is %.3f\n", 2*3.14*r*h);

    printf("And the Valume of Cylinder is %.3f\n", 3.14*r*r*h);

    /* printf("blah blah %d  yum yum %d is duh %f, b, y, f") the %LHS... print in the same order as on the RHS */
    return 0;
}

