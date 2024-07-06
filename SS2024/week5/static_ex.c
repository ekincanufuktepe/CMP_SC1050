#include<stdio.h>
int func();

int main() {
    printf("Returned value: %d\n", func());
    printf("Returned value: %d\n", func());
    printf("Returned value: %d\n", func());
    return 0;
}

int func() {
    static int x = 0; // static variables are similar global variables
    return x++; // careful this is a post-incerement, it returns the x value then it increments
}