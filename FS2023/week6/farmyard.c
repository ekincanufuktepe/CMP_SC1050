#include<stdio.h>

int main() {

    int num_of_cows = 0;
    int num_of_chickens = 0;
    int num_of_animals = -1;
    int num_of_legs = 0;

    printf("Enter number of animals: ");
    scanf("%d", &num_of_animals);
    
    while(num_of_animals < 0) {
        printf("Enter valid number of animals: ");
        scanf("%d", &num_of_animals);
    }

    printf("Enter number of legs: ");
    scanf("%d", &num_of_legs);
   
    //for(int signal = 1; signal == 1;) {
    while(signal == 1) {
        // check if input is above or equal to lower boundary
        if(num_of_legs >= (2*num_of_animals) ) {
            // check if input is below or equal to upper boundary
            if( num_of_legs <= (4*num_of_animals) ) {
                // check if input is even
                if(num_of_legs%2 == 0) {
                    signal = 0;
                }
                else {
                    printf("Cannot have odd number of legs\n");
                    scanf("%d", &num_of_legs);
                }
            }
            else {
                printf("Above upper boundary\n");
                scanf("%d", &num_of_legs);
            }
        }
        else {
            printf("Below lower boundary\n");
            scanf("%d", &num_of_legs);
        }
    }

    num_of_cows = (num_of_legs - (num_of_animals*2))/2;
    num_of_chickens = num_of_animals - num_of_cows;
    printf("Number of cows: %d\n", num_of_cows);
    printf("Number of chickens: %d\n", num_of_chickens);

    return 0;
}