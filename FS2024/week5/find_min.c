#include<stdio.h>

int minimum(int, int, int, int);

int main() {

    int min = minimum(4, 7, 2, 1);
    printf("Min. value: %d\n", min);

    return 0;
}

int minimum(int x, int y, int z, int w) {
    int min = x;
    if(min > y) {
        min = y;
    }
    if(min > z) {
        min = z;
    }
    if(min > w) {
        min = w;
    }
    return min;
}