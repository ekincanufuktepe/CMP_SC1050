#include<stdio.h>

int main() {

    int x = 5;

    printf("Before x:%d\n", x);
    x *= 2; // x = x * 2;
    printf("After x:%d\n", x);

    int y = 200;
    printf("Before y:%d\n", y);
    y /= x; // y = y / x;
    printf("After y:%d\n", y);

    return 0;
}