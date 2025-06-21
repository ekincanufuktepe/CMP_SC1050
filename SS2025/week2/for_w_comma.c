#include<stdio.h>

int main() {
    int x, y;
    int counter = 0;
    for(x = 0, y = 0; (x+y) < 10; x++, y = y + 2) {
        counter++;
    }
    printf("Number of repetitions: %d\n", counter);
    printf("x: %d, y: %d\n", x, y);
    return 0;
}