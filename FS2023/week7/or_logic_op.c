#include<stdio.h>

int main() {

    int x = 4;
    int y = -18;
    if(++y || 5 == x) {
        printf("if statement TRUE\n");
    }
    printf("y:%d\n", y);
    return 0;
}