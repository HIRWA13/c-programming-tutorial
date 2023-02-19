/*write your solution after the comment
Write a function that computes the absolute
value of an integer.
Understand what an absolute value is, before attempting it.
*/
#include <stdio.h>

void absolute(int n)
{
    /*finding the absolute value of a number*/
    if (n > 0)
    {
        printf("the absolute value of %d is %d", n, n);
    }
}

int main()
{
    int i;
    printf("enter a number ");
    scanf("%d", &i);
    absolute(i);
}