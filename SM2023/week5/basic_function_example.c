#include<stdio.h>

// all the prototypes below will do the same thing!
int square(int);
// int square(int y);
// int square(int x);

int main() {
    printf("Square: %d\n", square(5));
    return 0;
}

int square(int y) {
    return y * y;
}
