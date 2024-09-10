#include<stdio.h>

int main() {
    double x = 1.9345;
    int total = 5;
    int counter = 2;
    printf("Result #1: %f\n", (float)(total/counter)); // casting applied on the division result
    printf("Result #2: %f\n", (float)total/counter); // casting applied on "total" variable 
    printf("Without casting: %lf\n", x);
    printf("With casting: %d\n", (int) x);

    return 0;
}