#include<stdio.h>
#include<math.h>

int main() {

    double principle = 1000.0;
    double interest_rate = 0.05;
    double num_of_years = 10;
    double amount = 0;

    // a = p.(1 + r)^n

    double constant;
    constant = (1 + interest_rate);
    // double multiplier = 1;
    // for(int i=0; i<num_of_years; ++i) {
    //     multiplier *= constant;
    // }

    for(int years = 1; years <= num_of_years; years++) {
        amount = principle * pow(constant, years);
        printf("After %d year, your money will be $%.2lf\n", years, amount);
    }
    
    // amount = principle * multiplier;
    

    return 0;
}