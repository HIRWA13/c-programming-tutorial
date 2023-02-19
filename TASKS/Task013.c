/*Write your solution after the comment
Write a function that prints all natural numbers from n to 100,
followed by a new line.
That is n is your argument, it should print from any number
passed as argument till 100.
*/

#include <stdio.h>

void natural(int n)
{
    int i;
    for(i = n; i <= 100; i++)
    {
        printf("%d", i);
    }
}
int main(void)
{
    int num;
    printf("Enter a number less than 100 ");
    scanf("%d", &num);
    natural(num);
}