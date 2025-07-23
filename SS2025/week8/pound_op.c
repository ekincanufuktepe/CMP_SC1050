#include<stdio.h>

#define HELLO(x) puts("Hello, " #x)

int main() {

    char* text = "John";
    HELLO(*text);

    return 0;
}