#include<stdio.h>
// add the -lm flag to your gcc to be able to use the math functions
#include<math.h>    

int main() {
    double x = 2;
    double y = 3;

    printf("Result: %lf\n", pow(x, y)); // 2^3 ==> x^3

    return 0;
}