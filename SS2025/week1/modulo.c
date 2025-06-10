#include<stdio.h>

int main() {
    int x = -8;
    int y = -3;
    int r = 0;
    printf("Division: %d\n", x/y);
    r = x % y;
    printf("Remainder: %d\n", r);

    printf("Integer division (5/2): %d\n", 5/2);
    printf("Integer division (5.0/2): %lf\n", 5.0/2);
    //printf("Integer division (5/2) (with %%f): %f\n", 5/2); // bad practice, has warnings
    printf("Integer division (5/2.0): %f\n", 5/2.0);
    printf("Integer division (5.0/2.0): %f\n", 5.0/2.0);

    return 0;
}