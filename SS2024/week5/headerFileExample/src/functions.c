#include "header/functions.h"

int factorial(int n) {
    int result = 1;
    if(n == 0) {
        return 1;
    }
    for(int i=1; i<=n; i++) {
        result = result * i;
    }
    return result;
}

float fact(float n) {
    float result = 1;
    if(n == 0) {
        return result;
    }
    for(int i=1; i<=n; i++) {
        result = result * i;
    }
    return result;
}

void printFibonnacciSequence(int sizeOfSequence) {
    int initialValue = 1;
    int previousValue = 0;
    for(int i=0; i<sizeOfSequence; i++) {
        if(i == 0 || 1 == i) {
            printf("%d ", initialValue);
            previousValue = initialValue;
        }
        else {
            int tmp = initialValue;
            initialValue = previousValue + initialValue;
            previousValue = tmp;
            printf("%d ", initialValue);
        }
    }
}