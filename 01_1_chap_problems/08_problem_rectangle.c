#include <stdio.h>

int main()
{
    /*int length = 5;
    int breadth = 6;
    printf("The Area of this rectangle %d\n unit square", length*breadth);
    */
    int length, width;

    printf("Enter the length\n");
    scanf("%d", &length);
    printf("Enter the width\n");
    scanf("%d", &width);
    printf("Area of rectangle is %d\n Unit Sqare", length*width);
    return 0;
}

