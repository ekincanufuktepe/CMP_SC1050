#include<stdio.h>

int main() {

    int c = 1;
    while(++c <= 10) {
        printf("c:%d\n", c);
    }
    printf("Final value of c:%d\n", c);
    return 0;
}