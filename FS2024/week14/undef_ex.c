#include<stdio.h>

#define VALUE 10

void foo();

void foo() {
    printf("(foo) Value: %d\n", VALUE);
}

int main() {

    printf("Value: %d\n", VALUE);
    foo();
    #undef VALUE
    #define VALUE 20

    printf("Value: %d\n", VALUE);

    return 0;
}

