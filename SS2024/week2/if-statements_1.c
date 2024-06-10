#include<stdio.h>

int main() {
    
    int input = 0;
    printf("Enter a positive integer\n");
    scanf("%d", &input);

    // Error check if input is negative or not
    if(input < 0) { // if-statements will treat non-zero values as TRUE, and zero as FALSE
        printf("You entered negative value!");
        // just defining an arbitrary error code that the user entered an invalid input
        return -1; 
    }

    /*
        Careful with control structures without braces. Their body size will only have
        single-line. Anything below will be outside the body.
    */
    if(input % 2 == 0)
        printf("Your input is even!\n");
    else
        printf("Thank you for not entering an invalid input!\n"); // this is a part of else-block
        //if you need the print below to be in the else statement, use braces.
        printf("Your input is odd\n"); // this is not a part of the else-block, 
        
    return 0;
}