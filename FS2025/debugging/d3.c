#include <stdio.h>

/*  The program reads pairs of integers and tells you if the 
    ratio a/b is “big” (> 2). It should never crash, even if b is zero.

    The code has one bug on a single line. You may only change that line.

    Goal: Fix the bug so that the program works correctly and never crashes.
*/

int main(void) {
    int a, b;
    printf("Enter numerator and denominator (0 0 to quit):\n");
    while (1) {
        printf("> ");
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) break;

        if (a / b > 2 && b != 0) {
            printf("big ratio\n");
        } else {
            printf("not big\n");
        }
    }
    return 0;
}



