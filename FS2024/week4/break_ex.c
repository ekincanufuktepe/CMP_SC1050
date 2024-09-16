#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(NULL));
    int guessNumber = 1 + rand()%20; 
    int number = 0;
    int number_of_attempts = 0;
    while(1) { // infinite loop
        printf("Guess the number between 1-20\n");
        scanf("%d", &number);
        if(number == guessNumber) {
            number_of_attempts++;
            printf("Correct!\n");
            break;
        }
        else if(number > guessNumber) {
            printf("The number is less than %d\n", number);
        }
        else if(number < guessNumber) {
            printf("The number is greater than %d\n", number);
        }
        number_of_attempts++;
    }
    printf("You found the number with %d of attempts\n", number_of_attempts);
    printf("The number is: %d\n", guessNumber);
    return 0;
}