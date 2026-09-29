#include<stdio.h>
// BAD!! DON'T YOU EVER USE GLOBAL VARIABLES!
// IF YOU USE GLOBAL VARIABLE WE CANNOT BE FRIENDS!
int global_variable = 2; 

float square(float number); // prototype

int main() {

    printf("Square: %f\n", square(5.3));
    printf("Global variable (main): %d\n", global_variable);
    return 0;
}

float square(float number) {
    printf("Global variable (square): %d\n", global_variable);
    global_variable++;
    main();
    return number * number;
}