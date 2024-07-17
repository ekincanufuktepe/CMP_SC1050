#include<stdio.h>

int main() {

    int x = 5;
    int* xPtr;
    xPtr = NULL;
    xPtr = &x;

    printf("Address of x: %p\n", &x);
    printf("Value of x: %d\n", x);
    printf("xPtr points to: %p\n", xPtr);
    printf("Getting value of x through xPtr: %d\n", *xPtr);
    x = x + 1;
    printf("Getting value of x through xPtr: %d\n", *xPtr);
    printf("Value of x: %d\n", x);
    (*xPtr)++;
    printf("Getting value of x through xPtr: %d\n", *xPtr);
    printf("Value of x: %d\n", x);

    return 0;
}