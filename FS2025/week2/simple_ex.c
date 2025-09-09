#include<stdio.h>

int main() {
    // Define int variables
    int x = 0;
    // int _x = 0;  // valid variable name
    // int 1x = 0;  // INVALID variable name, cannot start with numbers
    // int x1 = 0;  // valid variable name
    int y = 0;
    int sum = 0;
    // int A = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    // A = _x + y;
    sum = x + y;

    printf("x: %d, y:%d, sum:%d\n", x, y, sum);
    printf("Address of x: %d\n", &x);
    printf("Address of y: %d\n", &y);
    printf("Address of sum: %d\n", &sum);

    return 0;
}