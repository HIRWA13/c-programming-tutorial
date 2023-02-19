#include <stdio.h>

void swap (int *x, int *y);

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    printf("After swap num1 = %d and num2 = %d\n", *x, *y);
}

int main(void)
{
    int num1 = 100;
    int num2 = 200;
    printf("Before swap num1 = %d and num2 = %d\n", num1, num2);
    swap(&num1, &num2);
}

