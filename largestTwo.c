#include <stdio.h>

int find(int x, int y)
{
    if(x > y)
        printf("the largest is %d\n", x);
    else if (y > x)
        printf("the largest is %d\n", y);
    else
        printf("the numbers are equal");
    
}

int main(void)
{
    int a = 14;
    int b = 12;

    printf("num1 is %d and num2 is %d\n", a, b);

    find(a, b);
}