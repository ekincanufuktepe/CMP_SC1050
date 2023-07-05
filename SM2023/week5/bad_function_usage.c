#include<stdio.h>

// Always include your prototypes for your functions!
// This is a very bad example on how you write bad code!
// int fac(int n);

int main() {

    printf("Factorial: %d\n", fac());
    return 0;
}

int fac(int n) {
    if(n == 0) {
        return 1;
    }
    return n * fac(n-1);
}