#include<stdio.h>

int main() {

    int product = 3;

    while (product <= 100) {
        printf("Failed product value: %d\n", product);
        product = 3 * product;
    }

    printf("Your number is: %d\n", product);

    return 0;
}