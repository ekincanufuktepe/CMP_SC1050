#include<stdio.h>

int main() {

    int counter = 0;

    /**
        a preincrement and postincrement will affect
        the condition outcome. Preincrement will have
        10 iterations, and postincrement will have 
        11 iterations.
     */
    while(counter++ <= 10) {
        printf("%d\n", counter);
    }
        
    return 0;
}