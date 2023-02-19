#include <stdio.h>

void even_odd(int a, int b)
{
    if (a % 2 == 0 && b % 2 == 0) 
    {
        printf("both numbers are even\n");
    }
    else if (a % 2 == 0)
    {
        printf("the first number is even\n");
    }
    else if (b % 2 == 0)
    {
        printf("the second number is even\n");
    }
   
    else 
        printf("Both numbers are odd\n");
    
}

int main(void)
{
    int x = 11;
    int y = 13;
    even_odd(x, y);
}