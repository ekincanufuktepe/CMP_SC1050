#include<stdio.h>

int increment();

int main() {
    
    printf("Increment: %d\n", increment());
    printf("Increment: %d\n", increment());
    return 0;
}

int increment() {
    static int y = 0; 
    y++;
    printf("this is func. increment, y: %d\n", y);
    return y;
}