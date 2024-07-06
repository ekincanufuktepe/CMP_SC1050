#include<stdio.h>

// function prototype with an argument/parameter that points to an address of an integer
void func(int*);

int main() {
    int var = 0;
    printf("Address from the main function: %p\n", &var);
    printf("Value from the main function: %d\n", var);
    func(&var);
    printf("Address from the main function: %p\n", &var);
    printf("Value from the main function: %d\n", var);
    return 0;
}

void func(int*x) {
    printf("Address from inside function: %p\n", x);
    (*x)++; // dereference than increment
    printf("Value from inside function: %d\n", *x);
    
} 