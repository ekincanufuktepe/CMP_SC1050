#include<stdio.h>

int func(int);

int main() {
    int var = 0;
    printf("Result from function: %d\n", func(var));
    printf("Result from function: %d\n", func(var));
    return 0;
}

int func(int x) { // makes a copy of the passed value
    ++x;
}