#include<stdio.h>

int main() {

    int x = 0;
    int y = 0;
    int z = 0;
    if(x != 5 || ++y && ++z) {
        printf("if statement TRUE\n");
    }
    printf("x, %d, y: %d, z: %d\n", x,y,z);
    return 0;
}