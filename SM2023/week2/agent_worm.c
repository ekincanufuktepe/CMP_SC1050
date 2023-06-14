#include<stdio.h>

int main() {
    // initial values
    //int total_num_of_legs = 48;
    //int total_num_of_animals = 15;

    int total_num_of_legs;
    int total_num_of_animals;

    /** VERSION 1 - With nested if-statements **/
    // // check if legs is between boundaries
    // // check lower boundary
    // if (total_num_of_legs >= (total_num_of_animals * 2)) {
    //     // check upper boundary
    //     if (total_num_of_legs <= (total_num_of_animals * 4)) {
    //         // check if legs are even
    //         if( (total_num_of_legs % 2) == 0 ) {
    //             printf("Entered valid number of legs!\n");
    //         }
    //         else{
    //             printf("Legs have to be even\n");
    //             return 1;
    //         }
    //     }
    //     else {
    //         printf("Exceeded upper boundary of possible legs\n");
    //         return 1;
    //     }
    // }
    // else {
    //     printf("Under lower boundary of possible legs\n");
    //     return 1;
    // }

    /** VERSION 2 - Sequential if-statements **/
    // check if legs is between boundaries
    // check lower boundary
    int valid = 0; // sentinal variable
    
    while(valid != 3) {
        printf("Enter number of animals: ");
        scanf("%d", &total_num_of_animals);

        printf("Enter number of legs: ");
        scanf("%d", &total_num_of_legs);
        if (total_num_of_legs < (total_num_of_animals * 2)) {
            printf("Under lower boundary of possible legs\n");
            valid = 0;
        }
        else {
            valid = valid + 1;
        }
        // check upper boundary
        if (total_num_of_legs > (total_num_of_animals * 4)) {
            printf("Above upper boundary of possible legs\n");
            valid = 0;
        }
        else {
            valid = valid + 1;
        }
        // check if legs are even
        if ((total_num_of_legs % 2) != 0 ) {
            printf("Legs cannot be odd\n");
            valid = 0;
        }
        else {
            valid = valid + 1;
        }
    }

    int number_of_cows;
    int number_of_chickens;

    number_of_cows = (total_num_of_legs - (total_num_of_animals * 2))/2;
    number_of_chickens = total_num_of_animals - number_of_cows;

    printf("Number of cows: %d\n", number_of_cows);
    printf("Number of chickens: %d\n", number_of_chickens);

    return 0;
}