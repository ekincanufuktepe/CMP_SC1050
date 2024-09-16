#include<stdio.h>

int main() {

    int i;
    int sum = 0;
    for(i=0; i<=100; i++) {
        if(i%2 == 0) {
            sum += i;
        }
    }
    printf("Sum of even numbers (0-100): %d\n", sum);
    return 0;
}