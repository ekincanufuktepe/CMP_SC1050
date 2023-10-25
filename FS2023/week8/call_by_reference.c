#include<stdio.h>

void increment(int*);

int main() {
    int x = 0;
    printf("Before, x: %d\n", x);
    increment(&x);
    printf("After, x: %d\n", x);
    return 0;
}

void increment(int* x) {
    *x = *x + 1;
    printf("this is func. increment, x: %d\n", *x);
}