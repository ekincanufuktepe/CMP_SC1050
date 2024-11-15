#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct pokemon {
    char name[50];
    struct pokemon* evolve;
} Pokemon;

int main() {

    Pokemon* poke1 = NULL;
    poke1 = malloc(sizeof(*poke1));
    strncpy(poke1->name, "Charmender", 50);

    Pokemon* poke2 = NULL;
    poke2 = malloc(sizeof(*poke2));
    strncpy(poke2->name, "Charmeleon", 50);

    Pokemon* poke3 = NULL;
    poke3 = malloc(sizeof(Pokemon));
    strncpy(poke3->name, "Charizard", 50);

    poke1->evolve = poke2;
    poke2->evolve = poke3;

    printf("Pokemon 1: %s evolves twice to %s\n", poke1->name, poke1->evolve->evolve->name);
    free(poke2);
    free(poke1);
    free(poke3);

    return 0;
}