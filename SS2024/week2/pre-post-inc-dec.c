#include<stdio.h>

int main() {

    int counter = 10;

    while(--counter) { // try with post-decrement as well!
        printf("Hi!\n");
    }
    printf("counter: %d\n", counter);

    return 0;
}