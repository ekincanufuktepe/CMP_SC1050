#include<stdio.h>

int main() {

    char x = 'a';
    char y = 'b';

    printf("Address of x: %p\n", &x);
    printf("Address of y: %p\n", &y);

    char* ptr = NULL;
    ptr = &x;
    printf("Value at %p: %c\n", ptr, *ptr);
    ptr = ptr + 1;
    printf("Value at %p: %c\n", ptr, *ptr);

    return 0;
}