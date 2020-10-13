#include <stdio.h>

// K&R Pg. 95
void swap(int x, int y)
{
    printf("swap: &x=%x, &y=%x\n", &x, &y);
    int temp;

    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 1;
    int y = 2;
    printf("before: x=%d, y=%d\n", x, y);
    printf("before: &x=%x, &y=%x\n", &x, &y);

    swap(x, y);
    printf("after:  x=%d, y=%d\n", x, y);
}
