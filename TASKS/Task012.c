/*Write your solution after the comment
Write a function that adds two integers and prints
the result.
*/
#include <stdio.h>

int add_two(int a, int b)
{
    int sum;
    sum = a + b;
    printf("the sum is %d", sum);
}
 
int main(void)
{
    int x, y;
    printf("Enter two numbers ");
    scanf("%d%d", &x, &y);
    add_two(x, y);
}