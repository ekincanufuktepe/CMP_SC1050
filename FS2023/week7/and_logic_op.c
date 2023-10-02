#include<stdio.h>

int main() {

    int x = 5;
    int y = -18;
    if(x == 5 && y++) {
        printf("if statement TRUE\n");
    }
    printf("y:%d\n", y);
    return 0;
}