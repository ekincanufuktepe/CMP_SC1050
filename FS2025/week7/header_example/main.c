#include "functions.h"

int main() {
    printf("Sum: %d\n", sum_of_numbers(10));

    int a = 1;
    printf("Call inc: %d\n", inc(a));
    printf("Call inc: %d\n", inc(a));
    printf("Call inc: %d\n", inc(a));
    printf("a: %d\n", a);
    return 0;
}