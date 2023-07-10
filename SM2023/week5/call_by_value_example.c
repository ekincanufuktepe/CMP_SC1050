#include<stdio.h>

int update(int);

int main() {
    int x = 2;
    printf("Before update: %d\n", x);
    printf("Update function result: %d\n", update(x));
    printf("After update: %d\n", x);
    return 0;
}

int update(int x) {
    x *= 5;
    return x;
}