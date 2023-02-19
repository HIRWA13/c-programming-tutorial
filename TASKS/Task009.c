/*write your solution after the comment
Write a function that checks for lowercase character.
That is, when passed in an arguments, it checks if the
argument is lowercase or uppercase.
*/
#include <stdio.h>

void check(char c)
{
    if((c >= 97) && (c <= 122))
    {
        printf("The character %c is lowercase\n", c);
    }
    else if ((c >= 65) && (c <= 90))
    {
        printf("the character %c is uppercase\n", c);
    }
}

int main()
{
    char a;
    printf("enter a character ");
    scanf("%c", &a);
    check(a);
}