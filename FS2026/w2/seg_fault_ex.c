#include<stdio.h>

int main() {

    puts("Hello");
    long long int x = 0;
    x = &x;
    printf("Address of x: %p\n", &x);
    printf("Value of x: %llx\n", x);
    scanf("%d", &x);
    puts("How are you doing?");

    return 0;
}