#include<stdio.h>

void greet();   // function prototype for greet

int main() {
    greet();    // function call
    return 0;
}

// function implementation
void greet() {
    printf("Welcome to our 1050 class!\n");
    //return; // for void functions return is not mandatory. But you can use it to end the function
}

