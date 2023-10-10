#include<stdio.h>
#include "armstrong_functions.h"

/*  Compile the code by including all the related ".c" files,
    not the ".h" files!
    Example: gcc armstrong.c armstrong_functions.c
*/
int main() {
    int input = 0;
    scanf("%d", &input);
    // int status = armstrong(input);
    if(armstrong(input)) {
        printf("%d is an Armstrong number!\n", input);
    } 
    else {
        printf("%d is NOT an Armstrong number!\n", input);
    }
    return 0;
}

