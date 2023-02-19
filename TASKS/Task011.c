/*write your solution after the comment
Write a function that prints the 9 times table,
starting with 0.
Output should look like this;
9 x 0 = 0
9 x 1 = 9
9 x 2 = 18
... and so on till 12
*/
#include <stdio.h>

void mult(int n)
{
    int i, prod;
    for(i = 0; i <= 12; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}

int main()
{
    int num;
    printf("Enter a number to multiply ");
    scanf("%d", &num);
    mult(num);
}