#include<stdio.h>

int main() {

    int animals = 0;
    printf("Enter number of animals: ");
    scanf("%d", &animals);

    int legs = 0;
    printf("Enter number of legs: ");
    scanf("%d", &legs);

    int cows = 0;
    int chickens = 0;

    cows = (legs - (2*animals))/2;
    printf("Number of cows: %d\n", cows);
    chickens = animals - cows;
    printf("Number of chickens: %d\n", chickens);

    return 0;
}