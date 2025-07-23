#include<stdio.h>

#define VALUE 5

void foo();

void foo() {
    printf("(foo) VALUE: %d\n", VALUE);
}

int main() {
    printf("(main) VALUE: %d\n", VALUE);
    foo();
    #undef VALUE
    #define VALUE 10
    printf("(main) VALUE: %d\n", VALUE);
    foo();
    return 0;
}

