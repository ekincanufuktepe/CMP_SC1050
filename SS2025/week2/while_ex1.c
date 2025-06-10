#include<stdio.h>

int main() {

    int x = 0;

    // a counter-controlled loop example
    // while(x != 10) {
    //     printf("x: %d\n", x);
    //     x = x + 1;
    // }

    // a sentinel controlled loop example
    while(x >= 0) {
        printf("Still positive x: %d\n", x);
        scanf("%d", &x);
    }
    printf("Negative input received: %d\n", x);
    return 0;
}