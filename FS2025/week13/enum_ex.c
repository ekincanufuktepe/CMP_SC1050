#include<stdio.h>
// static const int x = 9;
// const int* const p = &x;
enum dog {GERMAN_SHEPARD=-3, HUSKY, LABRADOR=4, DAUSHOUND};

typedef enum dog Dog;

int main() {

    Dog dogs[4];
    dogs[0] = GERMAN_SHEPARD;

    printf("dogs[0]=%d, GERMAN_SHEPARD=%d\n", dogs[0], GERMAN_SHEPARD);
    
    Dog dog_id;

    for(dog_id=GERMAN_SHEPARD; dog_id<=DAUSHOUND; dog_id++) {
        printf("dog_id=%d\n", dog_id);
    }

    printf("GS: %d\n", GERMAN_SHEPARD);
    printf("H: %d\n", HUSKY);
    printf("L: %d\n", LABRADOR);
    printf("D: %d\n", DAUSHOUND);


    return 0;
}