#include<stdio.h>

int main() {

    int sum;
    sum = 0;

    // 2 + 4 + 6 + 8 + 10 = 30
    for(int number = 2; number <= 100; number += 2) {
        sum = sum + number;
        // sum += number;
    }

    // for(int number = 2; number <= 100; sum += number, number += 2);

    // for(int number = 1; number <= 100; number++) {
    //     if(number%2 == 0) {
    //         sum += number;
    //     }
    // }

    printf("Result: %d\n", sum);

    return 0;
}