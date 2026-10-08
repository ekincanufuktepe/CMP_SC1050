#include<stdio.h>

int x = 6;

int main() {
    printf("(G)x: %d, (G)Address: %p\n", x, &x);
    int x = 5;
    printf("(1)x: %d, (1)Address: %p\n", x, &x);
    {   
        int x = 4;
        printf("(2)x: %d, (2)Address: %p\n", x, &x);
        {
            int x = 3;
            printf("(3)x: %d, (3)Address: %p\n", x, &x);
            x = 0;
        }
        int y;
        printf("(1)y: %d, (1)Address: %p\n", y, &y);
    }
    int y;
    printf("(2)y: %d, (2)Address: %p\n", y, &y);
    printf("x: %d\n", x);
    return 0;
}