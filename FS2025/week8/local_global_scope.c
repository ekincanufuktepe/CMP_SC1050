#include<stdio.h>

// declare global variable
int x = 1;
void foo();

int main() {

    foo();
    printf("A) x: %d\n", x);
    // local variable 
    int x = 2;
    {
        int x = 3;
        printf("C) x: %d\n", x);
        {        
            int x = 4;
            printf("D) x: %d\n", x);
        }
    }
    printf("B) x: %d\n", x);

    return 0;
}

void foo() {
    printf("E) x: %d\n", ++x);
}