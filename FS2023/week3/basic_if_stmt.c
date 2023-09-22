#include<stdio.h>

int main() {

    int x, y, z;

    printf("Enter two integer values: ");

    //scanf("%d%d", &x, &y);
    scanf("%d", &x); // enter variable x value
    scanf("%d", &y); // enter variable y value


    printf("x:%d, y:%d\n", x, y);

    if( x == y ) {
        printf("x and y are equal\n");
    }

    if( x != y) {
        printf("x and y are NOT equal\n");
    }

    return 0;
}