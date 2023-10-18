#include<stdio.h>

int increment();
int x = 0; // global variable
// static int x = 0; // only visible to this file

int main() {
    
    printf("Increment: %d\n", increment());
    x++;
    printf("Increment: %d\n", increment());
    return 0;
}

int increment() {
    x++;
    printf("this is func. increment, x: %d\n", x);
    return x;
}