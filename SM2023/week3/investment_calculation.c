#include<stdio.h>
#include<math.h>

int main() {

    double principle = 1000.0;
    double interest = 0.05;
    double year = 10.0;
    double money = 0.0;
    
    for(int i=1; i<=year; i++) {
        /* To use the math functions, sometimes you have to 
            compile with the '-lm' flag to recognize the functions.
            Example: 
                gcc investment_calculation.c -lm
        */
        //money = principle * pow((1.0 + interest), i);
        
        /* this is an alternative solution if you don't
            want to use the pow() function, from math.h library
        */
        double coefficient = 1.0;
        // power calculation this is used for calculating the coefficient
        for(int j=0; j < i; j++){
            coefficient = coefficient * (1 + interest);
        }
        money = principle * coefficient;
        printf("Year: %d, Principle: %.2lf\n", i, money);
    }
    
    return 0;
}