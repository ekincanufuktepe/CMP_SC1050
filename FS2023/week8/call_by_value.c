#include<stdio.h>

int increment(int);

int main() {

    int x = 0;
    printf("Before, x: %d\n", x);
    increment(x);
    printf("After, x: %d\n", x);
    return 0;
}

int increment(int x) {
    x = x + 1;
    printf("this is func. increment, x: %d\n", x);
    return x;
}