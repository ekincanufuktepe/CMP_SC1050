#include<stdio.h>

enum pets {DOG=1, CAT=4, BIRD};
typedef enum pets Pets;

int main() {

    enum pets pet = CAT;

    Pets myPet = BIRD;
    printf("Pet type: %d\n", pet);
    printf("Pet type: %d\n", myPet);

    return 0;
}