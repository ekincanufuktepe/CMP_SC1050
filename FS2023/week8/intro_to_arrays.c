#include<stdio.h>

int main() {

    // the first element position/index in an array is always 0
    int x[100] = {0}; // initialize all 100 elements to 0

    int lowerBoundary = 0;
    int upperBoundary = 0;
    scanf("%d", &lowerBoundary);
    scanf("%d", &upperBoundary);

    // initializing the array
    int index = 0;
    for(int i=lowerBoundary, index=0; i<=upperBoundary; i++, index++) {
        x[index] = i;
    }

    int sum = 0;
    for(int i=0; i<100; i++) {
        printf("%d\n", x[i]);
        sum += x[i];
    }

    printf("Sum is: %d\n", sum);

    return 0;
}