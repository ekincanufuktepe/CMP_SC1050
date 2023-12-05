#include<stdio.h>
#include<stdlib.h>

int main() {

    int* ptr;
    ptr = NULL;

    int x = 10;
    ptr = &x;

    // all 4 below are the same 
    printf("Address of x: %p\n", &x);
    printf("Address info from ptr: %p\n", ptr);
    printf("Address info from ptr: %p\n", &*ptr);
    printf("Address info from ptr: %p\n", *&ptr);

    // except this one, this will print the addr. of the pointer itself
    printf("Address info from ptr: %p\n", &ptr);

    ptr = NULL;
    return 0;
}