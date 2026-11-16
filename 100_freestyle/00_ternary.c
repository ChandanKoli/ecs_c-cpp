#include <stdio.h>

int main(void)
{
    int i = -4, j, num;
    j = (num < 0 ? 0 : num * num);
    printf("%d\n", j);
    return 0;
}
