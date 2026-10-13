#include<stdio.h>

int main() {
    int x = 999;
    int array[10];

    // for(int i=-5; i<10; i++) {
    for(size_t i=0; i<10; i++) {
        array[i] = i+1;
    }

    // print array content
    // for(int i=-5; i<10; i++) {
    for(size_t i=0; i<10; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    printf("5th element of array: %d\n", array[4]);
    // printf("x:%d\n", x);

    return 0;
}