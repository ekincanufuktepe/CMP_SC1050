#include "functions.h"

int sum_of_numbers(int n) {
    if(n < 0) {
        return -1;
    }
    int total = 0;
    for(int i=0; i<n; i++) {
        total += i;
    }
    return total;
}

int inc(int x) {
    x++;
    return x;
}