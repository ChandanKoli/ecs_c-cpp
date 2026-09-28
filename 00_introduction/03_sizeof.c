#include <stdio.h>

int main()
{
    //prints the size of int
    printf("%zu bytes\n", sizeof(int));

    // prints the size of float
    printf("%zu bytes\n", sizeof(float));

    // prints the size of double
    printf("%zu bytes\n", sizeof(double));
    
    // prints the size of char
    printf("%zu bytes\n", sizeof(char));

    return 0;
}