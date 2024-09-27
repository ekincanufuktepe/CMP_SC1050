#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ARRAY_SIZE 10

int main() {
    int array[ARRAY_SIZE] = {0};
    srand(time(NULL));

    for(int i=0; i<ARRAY_SIZE; i++) {
        int rand_value = rand()%10 + 1;
        printf("Random number '%d' generated\n", rand_value);
        array[i] = rand_value;
    }

    // print array content
    for(int i=0; i<ARRAY_SIZE; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    // print value that are greater than 6
    int counter = 0; // variable to count numbers greater than 6
    for(int i=0; i<ARRAY_SIZE; i++) {
        if(array[i] > 6)
            counter++;
    }
    printf("You have %d numbers greater than 6!\n", counter);
}