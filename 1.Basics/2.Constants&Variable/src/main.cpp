#include <stdio.h>
#include<iostream>
int main()
{
    int a = 10;
    int b = a;
    int& c = a;
    printf("value of a: %d.\n", a);
    printf("value of b: %d.\n", b);
    printf("value of c: %d.\n", c);

    printf("Address of a: %p.\n", &a);
    printf("Address of b: %p.\n", &b);
    printf("Address of c: %p.\n", &c);

    c = 5;
    printf("value of a: %d.\n", a);
    printf("value of b: %d.\n", b);
    printf("value of c: %d.\n", c);





    return 0;
}