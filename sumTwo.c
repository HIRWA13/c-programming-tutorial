#include <stdio.h>

void sum (int x, int y)
{
    int z;
    z = x + y;
    printf("the sum is %d\n", z);
}

int main()
{
    int a = 10;
    int b = 30;
    sum(a, b);
}