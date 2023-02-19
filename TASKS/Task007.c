/*
write your solution after the comment
Write a function that prints the alphabet, in uppercase,
followed by a new line.
*/
#include <stdio.h>

void upper(void)
{
    char c;
    int i;
    for(i = 65; i <= 90; i++)
    {
        printf("%c", i);
    }
    printf("\n");
}

int main(void)
{
    upper();
}