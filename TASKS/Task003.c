/* Write your program after the comment
Write a program that reads input from user (Number)
If the number is Odd, display 'userInput is Odd'
If the number is even, display 'userInput is even'
If the number is zero, display 'This is zero'

NOTE: 'userInput' should be the number entered by the user.

*/
#include <stdio.h>

int main(void)
{
    int userInput;
    printf("enter a number:\n");
    scanf("%d", &userInput);
    if((userInput % 2 == 0) && (userInput != 0))
    {
        printf("The number you entered is Even\n");
    }
    else if (userInput % 2 != 0)
    {
        printf("The number you entered is Odd\n");
    }
    else
    {
        printf("The number you entered is 0\n");
    }
    
}