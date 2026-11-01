#include <stdio.h>

int main(void)
{   
    int age ;

    scanf("%d",&age);

    if(age>10){
        printf("We are inside if\n");
        printf("Your age is greater than 10\n");
    }
    if(age%5==0){
        printf("We are inside another if\n");
        printf("Your age is divisible by 5\n");
    }
    return 0;
}