#include <stdio.h>

int main()
{
    int x=1, y=2, z[10];
    int *ip, *ip2;      // ip is a pointer to an int

    ip = &x;            // ip now points to x
    ip2 = &y;
    printf("x=%d\n", x);
    printf("&x=%x\n", &x);
    printf("ip=%x\n", ip);   // prints address of x
    printf("*ip=%d\n", *ip);   // prints address of x
    printf("y=%d\n", y);
    printf("&y=%x\n", &y);
    printf("ip2=%x\n", ip2);
    printf("*ip2=%d\n", *ip2);

    y = *ip;            // y is now 1
    printf("y=%d\n", y);

    for (int i=0; i<10; i++) {
        printf("z[%d]=%x\n", i, &z[i]);
        z[i] = i*10;
        printf("z[%d]=%d\n", i, z[i]);
    }

    ip = z; // &z[0];
    printf("ip=%x\n", ip);
    printf("*ip=%d\n", *ip);  

    ip++;
    printf("ip=%x\n", ip);
    printf("*ip=%d\n", *ip);  

    ip += 7;
    printf("ip=%x\n", ip);
    printf("*ip=%d\n", *ip);  

/*
    *ip = 0;            // x is now 0
    printf("x=%d\n", x);

    ip = &z[0];         // ip now points to z[0]
    printf("ip=%x\n", ip);

  */  return 0;
}
