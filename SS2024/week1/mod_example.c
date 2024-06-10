#include<stdio.h>

/*
    A simple remainder calculation example
    with remainder operator '%'.
*/
int main() {
    int r = 5;
    int s = 2;
    // you can directly print the values without storing the in a variable
    // However, you cannot use it again since it is not stored.
    printf("Remainder: %f\n", r%s);

    // When you perform a division operations on 2 integers, the result will
    // be an integer value and it will discard the floating point (precision)
    // value. You need at least on of your value to be a fload/double to get
    // floating point results. You can also use casting on one variable to
    // get the correct result.
    printf("Division Result: %f\n", (float)r/s);    

    return 0;
}