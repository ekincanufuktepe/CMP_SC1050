#include<stdio.h>

int main() {

    // Address modification is not allowed
    // Value modification is allowed
    int x = 5;
    int y = 10;
    int* const p = &x; // can only initialize where you define
    //p = NULL;

    //p = &x;
    *p = 0;
    

    printf("x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Dereference pointer: %d\n", *p);
    printf("pointer address: %p\n", p);

    //p = &y;

    printf("y: %d\n", y);
    printf("Address of y: %p\n", &y);
    printf("Dereference pointer: %d\n", *p);
    printf("pointer address: %p\n", p);

    return 0;
}