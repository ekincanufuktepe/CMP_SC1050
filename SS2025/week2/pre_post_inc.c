#include<stdio.h>

int main() {

    int x = 1;
    --x;
    if(x) {
        printf("Inside if-statement\n");
    }

    printf("x: %d\n", x);

    return 0;
}