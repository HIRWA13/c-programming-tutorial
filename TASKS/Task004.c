/* Write your program after the comment
Write a program that asks and reads the following input from a use;
Your name
Your age
and then displays; Your name is 'name' and you are 'age' years old.

Example;
what is your name: David
How old are you?: 65

Output:
Your name is David and you are 65 years old.
*/
#include <stdio.h>

int main()
{
    int age;
    char *name;

    printf("What is your name: ");
    scanf("%s", name);
    printf("what is your age: ");
    scanf("%d", &age);
    printf("thank you :) %s it seems like you are %d years old", name, age);
}