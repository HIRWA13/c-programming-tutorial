/* Write your program after the comment
Write a program that prints the alphabet in lowercase, followed by a new line.

Print all the letters except q and e

use printf

*/

#include <stdio.h>

int main(void)
{
    char c;
    int i;
    for(i = 97; i < 122; i++)
     {
            printf("%c", i);
     }
}