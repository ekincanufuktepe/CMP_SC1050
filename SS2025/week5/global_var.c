#include<stdio.h>
int x = 0;
void foo();
void bar();

int main() {
    printf("x: %d, Address: %p\n", x, &x);
    foo();
    printf("x: %d, Address: %p\n", x, &x);
    bar();
    printf("x: %d, Address: %p\n", x, &x);
    return 0;
}

void foo() {
    printf("Calling foo() function\n");
    x = x + 1;    
}

void bar() {
    printf("Calling bar() function\n");
    x *= 2;
}
