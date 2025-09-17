#include<stdio.h>

int main() {

    int x = 0;

    if(++x) {   // also try with x++
        printf("inside if-statement\n");
    }

    printf("x: %d\n", x);

    return 0;
}