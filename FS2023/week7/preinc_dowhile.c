#include<stdio.h>

int main() {
    int i = 0;

    do {
        printf("%d\n", i);
    } while(i++ < 10);

    printf("%d\n", i);

    return 0;
}