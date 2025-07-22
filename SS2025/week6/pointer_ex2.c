#include<stdio.h>

int main() {

    int* xPtr = NULL;
    int x = 2;
    xPtr = &x;

    printf("(Address) x:%p, xPtr:%p\n", &x, xPtr);
    printf("(Value) x:%d, *xPtr:%d\n", x, *xPtr);

    return 0;
}