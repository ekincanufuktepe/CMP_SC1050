#include<stdio.h>

struct data {
    int x;
    char y;
    double z;
    char str[20];
};

int main() {
    // initialize struct types by following the member order
    struct data var = {1, 'a', 3.16, "hello"};

    printf("x: %d\n", var.x);
    printf("y: %c\n", var.y);
    printf("z: %lf\n", var.z);
    printf("str: %c\n", var.str[0]);

    return 0;
}