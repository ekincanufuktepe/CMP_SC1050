#include<stdio.h>
// this is a global variable, and using global variable are dangerous to use. Try to avoid using them  
int x = 7 

int main() {
    int x = 1; // local variable
    { // Start scope #2
        int x = 5; // local variable, you are allowed to define another local variable with the same name only if they are in different scopes
        { // Start scope #3
           int x = 3; // local variable
        } // Start scope #3
        printf("x: %d\n", x); // will print 5, because variable "int x = 3" will no longer exist
    } // End scope #2

    return 0;
}