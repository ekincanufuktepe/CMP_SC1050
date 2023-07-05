#include<stdio.h>

int main() {

    int count = 0;

    do {
        printf("Count: %d\n", count);
    } while(++count > 10);

    return 0;
}