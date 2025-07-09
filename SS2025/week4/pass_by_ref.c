#include<stdio.h>

void inc(int* x) {
    *x = *x + 1;
}

void inc_2(int x) {
    x = x + 1;
    printf("inc_2 x value: %d\n", x);
}

int main() {
    int x = 0;
    // inc(&x);
    inc_2(x);
    printf("x: %d\n", x);
    return 0;
}