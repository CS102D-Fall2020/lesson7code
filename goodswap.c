#include <stdio.h>

// K&R Pg. 95
void swap(int *xptr, int *yptr)
{
    printf("*xptr=%d, *yptr=%d\n", *xptr, *yptr);
    printf("xptr=%x, yptr=%x\n", xptr, yptr);
    int temp;

    temp = *xptr;
    *xptr = *yptr;
    *yptr = temp;
}

int main()
{
    int x = 1;
    int y = 2;
    printf("before: x=%d, y=%d\n", x, y);

    swap(&x, &y);
    printf("after:  x=%d, y=%d\n", x, y);
    printf("after:  x=%x, y=%x\n", &x, &y);
}
