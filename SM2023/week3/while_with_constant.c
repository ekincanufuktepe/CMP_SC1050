#include<stdio.h>

/*
    Advice:
    Try to run each while statement once by leaving
    one of the while statements uncommented, and the 
    others commented to have a better understanding
    on how while statements work.
*/

int main() {

    int i = 5;

    // prints 5 times, because it is a postincrement
    while(i--) {
        printf("(1) I am in the while loop!\n");
    }

    // prints 4 times, because it is a preincrement
    while(--i) {
        printf("(2) I am in the while loop!\n");
    }

    /* 
        non-zero values are considered as TRUE (1)
        zero values are considered as FALSE (0)

        This example will print infinite number of
        "(3) I am in the while loop!\n"
    */
    while(i) {
        printf("(3) I am in the while loop!\n");
    }

    return 0;
}