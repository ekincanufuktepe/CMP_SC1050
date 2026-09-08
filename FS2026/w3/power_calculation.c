#include<stdio.h>

int main() {

    int x = 0;
    int y = 0;
    puts("Enter the inputs for x^y");
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    int count = 0;
    int result = 1;
    while(y > count) {
        result = result * x;
        count = count + 1;
    }

    // while(y) {
    //     result = result * x;
    //     y = y - 1;
    // }

    printf("(%d^%d) = %d\n", x, y, result);

    return 0;
}