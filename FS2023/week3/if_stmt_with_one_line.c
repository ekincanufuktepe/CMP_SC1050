#include<stdio.h>

int main() {

    int x = 50;

    if(x <= 50) {
        printf("I received you x variable!\n");
        printf("x is less or equal than 50\n");
    }

    /*  This is not the same code with above
        For the code below, the second printf is
        not a part of the if statement. If you don't
        have braces, only the first line after the if, 
        else, else if, statemtent will be executed. 

        This will also apply to other statements like
        for, while as well, which we will discuss later.
    */
    // x = 51;
    // if(x <= 50)
    //     printf("I received you x variable!\n");
    //     printf("x is less or equal than 50\n");

    return 0;
}