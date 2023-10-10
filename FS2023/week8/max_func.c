#include<stdio.h>

// prototype
int max (int, int , int);
int min (int, int , int);

int main() {

    int x = 19;
    int y = 9;
    int z = 200;

    printf("Max value: %d\n", max(x, y, z));
    printf("Min value: %d\n", min(x, y, z));

    return 0;
}

int max(int a, int b, int c) {
    int max_value = a;

    if(max_value < b) {
        max_value = b;
    }

    if(max_value < c) {
        max_value = c;
    }

    return max_value;
}

int min (int x, int y, int z) {
    int min_value = y;

    if(min_value > x) {
        min_value = x;
    }

    if(min_value > z) {
        min_value = z;
    }

    return min_value;
}