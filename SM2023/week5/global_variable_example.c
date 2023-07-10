#include<stdio.h>

/*  WARNING: PLEASE DO NOT TRY THIS AT HOME!!
    GLOBAL VARIABLES ARE BAD, THEY ARE NOT 
    YOUR FRIEND!
*/
int update_global_variable();

int global_variable = 0;

int main() {

    update_global_variable();
    printf("Global variable: %d\n", global_variable);
    update_global_variable();
    update_global_variable();
    update_global_variable();
    printf("Global variable: %d\n", global_variable);
    global_variable = 0;
    printf("Global variable: %d\n", global_variable);
    update_global_variable();
    printf("Global variable: %d\n", global_variable);
    return 0;
}

int update_global_variable() {
    return ++global_variable;
}