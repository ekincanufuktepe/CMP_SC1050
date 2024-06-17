#include<stdio.h>

int main() {
    int counter;

    /*
        For-statement requires two ';' (semi-colons), which gives you three sections:        
        - first section: initialization runs first and only once.
        - second section: condition runs after the first section and every time after the third section is executed
        - third section: if the section section (condition) evaluates as true, the statements in the "for" body are
                        executed. Once the end of the for body is reached, you execute the expression or statement
                        in the third section.
    */  
    for(counter = 1; counter <= 10 ; counter++) {
        printf("Counter: %d\n", counter);     
    }

    // infinite loop with for-statement
    // for(;;) or for(expr1; ; expr3)
    printf("Last value of counter: %d\n", counter);

    return 0;
}