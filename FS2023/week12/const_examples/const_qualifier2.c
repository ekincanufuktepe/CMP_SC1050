#include<stdio.h>

int main() {

    // Address modification is allowed
    // Value modification is NOT allowed
    int x = 5;
    int y = 10;
    const int* p;
    p = NULL;

    p = &x;
    //*p = 0;
    

    printf("x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Dereference pointer: %d\n", *p);
    printf("pointer address: %p\n", p);

    p = &y;

    printf("y: %d\n", y);
    printf("Address of y: %p\n", &y);
    printf("Dereference pointer: %d\n", *p);
    printf("pointer address: %p\n", p);

    return 0;
}