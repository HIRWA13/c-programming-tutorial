/* Write your program after the comment
Write a program that asks and reads the score of a user
If the score is less than 80, display to the user that they
are not elgible to be enrolled.
If the score is greater than or equal 80, they can be enrolled.
*/
#include <stdio.h>

int main(void)
{
    int score;
    
    printf("enter your score\n");
    scanf("%d", &score);

    if(score >= 80)
    {
        printf("Thank you for appliying :), you are enrolled");
    }
    else
        printf("sorry you :( can't be enrolled");
}