#include<stdio.h>

void doubleTheValue(int x);
void doubleTheValuePointerVersion(int* x);

int main() {
    int a = 5;

    // Pass-by-value
    printf("a: %d\n", a);
    doubleTheValue(a);
    printf("a: %d\n", a);

    // Simulation of pass-by-ref
    printf("a: %d\n", a);
    doubleTheValuePointerVersion(&a);
    printf("a: %d\n", a);

    return  0;
}

void doubleTheValue(int x) {
    x = x * 2;
}

void doubleTheValuePointerVersion(int* x) {
    *x = *x * 2;
}