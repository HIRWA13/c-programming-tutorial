#include<stdio.h>

void swap(int x, int y);

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("after swap a = %d and b = %d\n", x, y);
}

int main()
{
    int a = 100;
    int b = 200;
    printf("before swap a = %d and b = %d\n", a, b);
    swap(a, b);
  

    return (0);
}