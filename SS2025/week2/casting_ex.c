#include<stdio.h>

int main() {

    int x = 5;
    int z = 2;
    float y = 3.2;

    printf("x: %f\n", (float)x);
    printf("y: %d\n", (int)y);

    float result = x/(float)z;
    printf("Result: %.1f\n", result);
    printf("Value: %.f\n", 3.567);

    return 0;
}