#include<stdio.h>

int main() {

    int x = 0;
    int y = 0;
    int z = 0;
    int f = ++z && ++y || ++x;

    // if(++z || (++y && ++x)) {
    //     printf("inside if-statement\n");
    // }

    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("z: %d\n", z);
    printf("f: %d\n", f);

    return 0;
}