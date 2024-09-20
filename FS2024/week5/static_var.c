#include<stdio.h>

int foo() {
    static int x = 0;
    return ++x;
}

int main() {
    printf("value: %d\n", foo());
    printf("value: %d\n", foo());
    printf("value: %d\n", foo());
    printf("value: %d\n", x);
}