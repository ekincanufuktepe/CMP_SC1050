#include<stdio.h>

int x = 1;

int main() {

    // int* p = NULL;
    printf("x:%d, Address: %p\n", x, &x);
    int x = 5;
    // p = &x;
    {
        // printf("x:%d, Address: %p\n", x, &x);
        
        int x = 3;
        // printf("x:%d, Address: %p\n", x, &x);
        // printf("*p:%d, Address: %p\n", *p, p);
        // x = 0;
    }
    // p += 1;
    // int y;
    // printf("*p:%d, Address: %p\n", *p, p);
    // printf("y:%d, Address: %p\n", y, &y);
    // printf("x:%d, Address: %p\n", x, &x);
    
    return 0;
}