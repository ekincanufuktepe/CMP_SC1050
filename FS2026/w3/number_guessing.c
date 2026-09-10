#include<stdio.h>
#include<stdlib.h> // is for rand()
#include<time.h> // is for time(NULL)

int main() {

    srand(time(NULL));
    int rand_number = (rand()%100) + 1; // generate random number between 1-100
    // int rand_number = rand();
    // int rand_number = rand()%10 + 20; set range to 20-29
    printf("Random number: %d\n", rand_number);
    int guess = 0;

    while(rand_number != guess) {
        printf("Guess the number: ");
        scanf("%d", &guess);
        
        if(guess < rand_number) {
            puts("Go HIGHER");
        }
        else if(guess > rand_number) {
            puts("Go LOWER");
        }
        else {
            puts("CONGRATS!!!! You guessed the number Correct.");
        }

        /* Alternative #2 */
        // printf("Go %s\n", 
        //     rand_number > guess ? 
        //     "HIGHER" : 
        //     (rand_number == guess ? "FISH" : "LOWER"));

    }

    printf("Outside while loop\n");

    return 0;
}