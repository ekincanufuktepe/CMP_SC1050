#include<stdio.h>

int main() {

    int x = 0;

    if(x--) {
        printf("Inside if statement\n");
    }

    printf("Variable x: %d\n", x);

    int y = 10;

    while( y -= 2 ) {
        printf("HEY\n");
    }

    int a = 1;
    int b = 2;
    int c = 3;
    int d = b * c++;
    printf("d: %d\n", d);

    return 0;
}