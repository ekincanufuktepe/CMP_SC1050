#include<stdio.h>

#include<stdio.h>

int main() {

    int x = 1;
    int y = 2;
    int z = 3;

    int* ptr = NULL;

    ptr = &x;
    printf("addr of x: %p\n", &x);
    printf("addr of y: %p\n", &y);
    printf("ptr: %p, *ptr: %d\n", ptr, *ptr);

    ptr++;
    printf("ptr: %p, *ptr: %d\n", ptr, *ptr);

    return 0;
}