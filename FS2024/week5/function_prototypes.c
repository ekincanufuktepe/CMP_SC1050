#include<stdio.h>

// 2^5 = 2 * 2 * 2 * 2 * 2 
// int power(int x, int y); // function prototype #1
int power(int, int); // function prototype #2
// int power(int first_var, int second_var); // function prototype #3

// float power(float);

void greet();

int main() {
    greet();
    int a = 2;
    int b = 5;
    printf("%d^%d: %d\n", a, b, power(a, b));
    return 0;
}

int power(int x, int y) {
    int result = 1;
    for(int i=0; i<y; i++) {
        result = result * x;
    }
    return result;
}

void greet() {
    printf("Welome to Chapter 5 - Functions!\n");
    return;
    printf("Let's see if I will be printed???\n");
}

// float power(float x) {
//     return x * x;
// }


