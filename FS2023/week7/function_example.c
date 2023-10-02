#include<stdio.h>

//int factorial(int x); // prototype version #1
//int factorial(int); // prototype version #2
int factorial(int z); // prototype version #3

int main() {
    int result = factorial(5);
    printf("Factorial result: %d\n", result);
    // or
    printf("Factorial result: %d\n", factorial(5));
    return 0;
}

// implementation of the factorial function
int factorial(int x) {
    int result = 1;
    if(x == 0) {
        return result;
    }
    else {
        for(int i=1; i<=x; i++) {
            //result = result * i;
            result *= i;
        }
        return result;
    }
}

