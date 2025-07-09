#include "arithmetic.h"
#include<stdio.h>

static int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

void click() {
    static int c = 0;
    // int c = 0;
    printf("c value: %d\n", c);
    printf("Add: %d\n", add(5,6));
    c++;
}
