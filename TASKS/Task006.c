/*
Write a program in C to check a given number is even
or odd using the function.
*/
#include <stdio.h>

void even_odd(int a)
{
    if ((a % 2 == 0) && (a != 0))
    {
        printf("the number is even");
    }
    else if(a % 2 != 0)
    {
        printf("the number is odd");
    }
    else
    {
        printf("the number is zero");
    }
}
int main()
{
    int x;
    printf("enter a number ");
    scanf("%d", &x);
    even_odd(x);
}