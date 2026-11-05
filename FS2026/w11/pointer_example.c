#include<stdio.h>

int main() {

    int x = 5;
    //int *xPtr = &x;
    int *xPtr = NULL;
    xPtr = &x;

    printf("x: %d\n", x);
    printf("Address of x (&x): %p\n", &x);
    printf("xPtr: %p\n", xPtr);
    printf("(Dereferencing) *xPtr: %d\n", *xPtr);
    printf("Address of xPtr: %p\n", &xPtr);
    printf("size of pointer: %zu\n", sizeof(xPtr));

    x = x * 10;

    printf("\nx: %d\n", x);
    printf("Address of x (&x): %p\n", &x);
    printf("xPtr: %p\n", xPtr);
    printf("(Dereferencing) *xPtr: %d\n", *xPtr);
    printf("Address of xPtr: %p\n", &xPtr);
    printf("size of pointer: %zu\n", sizeof(xPtr));

    *xPtr = *xPtr * (-1);

    printf("\nx: %d\n", x);
    printf("Address of x (&x): %p\n", &x);
    printf("xPtr: %p\n", xPtr);
    printf("(Dereferencing) *xPtr: %d\n", *xPtr);
    printf("Address of xPtr: %p\n", &xPtr);
    printf("size of pointer: %zu\n", sizeof(xPtr));

    return 0;
}