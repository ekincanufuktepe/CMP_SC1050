#include<stdio.h>

int main() {
    int a = 0; 
    // if you intend to have an equality operation, have the constant on the left and variable on the right
    // this will prevent you making mistakes by using an assignment (=) rather than equality (==).
    // for assignments the variable operand must be on the left, not right.
    if(1 == a) 
        printf("a is equal to 1\n");
    a++;
    int x = a==0; // first check if a is equal to 0, if true return 1 and assign to x, if false, return 0 and assign to x.
    printf("x: %d\n", x);

    return 0;


}