#include<stdio.h>

int main() {

    int x = 10;

    // Read x --> 10
    // Decrement x --> 9
    // print x --> print 9

    while(x--) {    // try with --x to see the difference
        printf("x: %d\n", x);
    }

    printf("Final value of x: %d\n", x);

    return 0;
}