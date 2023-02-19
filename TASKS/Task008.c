/*write your solution after the comment
Write a function that prints the alphabet, in lowercase
followed by a new line.
*/
#include <stdio.h>
void lower(void)
{
    char c;
    int i;
    for(i = 97; i <= 122; i++)
    {
        printf("%c", i);
    }
    printf("\n");
}

int main(void)
{
    lower();
}