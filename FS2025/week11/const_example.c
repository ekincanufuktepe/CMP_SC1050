#include<stdio.h>

int main() {

    const int x = 5;

    int* ptr = &x;
    
    // const int* const ptr = &x;

    // const int* const p = ptr;
    // p = ptr;

    // x++;

    *ptr += 5;

    printf("*ptr: %d\n", *ptr);
    // printf("*p: %d\n", *p);

    return 0;
}