/*
 Write a program in C to find the square of any number
using the function.
*/
#include <stdio.h>

int main(void)
{
    int x;

    printf("enter a number: ");
    scanf("%d", &x);
    x = x * x;
    printf("the square of x is %d", x);
}