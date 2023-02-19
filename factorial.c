#include <stdio.h>

int num_factorial(int num)
{
    int x = 1; 
    int fact = 1;
    while (x <= num)
    {
        fact = fact * x;
        x++;
    }
    printf("factorial is of %d is %d", num, fact);
    
}
int main(void)
{
    int a = 4;
    num_factorial(a);
}