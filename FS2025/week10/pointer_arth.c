#include<stdio.h>

int main() {

    int x = 1;
    {
        int y = 2;
        {
            int z = 3;
            // z++;
            printf("z: %d, addr: %p\n", z, &z);
        }
        int w;
        printf("w: %d, addr: %p\n", w, &w);
        printf("y: %d, addr: %p\n", y, &y);
    }
    printf("x: %d, addr: %p\n", x, &x);
    

    return 0;
}