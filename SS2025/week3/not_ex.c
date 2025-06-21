#include<stdio.h>

int main() {

    int x = 0;

    x = !x;

    if(x) {
        printf("inside if-statement\n");
    }

    printf("x: %d\n", x);

    return 0;
}