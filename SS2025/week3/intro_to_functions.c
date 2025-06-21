#include<stdio.h>

// int fibonacci(int x);
// int fibonacci(int y);
int fibonacci(int);

int main() {
    
    int n = 0;
    printf("Enter the sequence number: ");
    scanf("%d", &n);
    printf("Fibonacci sequence at %d: %d\n", n, fibonacci(n));

    return 0;
}

int fibonacci(int x) {
    int num1 = 0;
    int num2 = 1;
    int num3 = 1;

    printf("%d ", num3);
    for(int i=1; i<x; ++i) {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
        printf("%d ", num3);
    }
    printf("\n");

    return num3;
}