#include<stdio.h>

typedef struct pokemon {
    int hp;
    char name[50];
} Pokemon;

int main() {

    FILE* fPtr = NULL;

    if((fPtr = fopen("./files/pokedex.txt", "r")) == NULL) {
        fprintf(stderr, "Cannot open file\n");
        //printf("Cannot open file\n");
        return -1;
    }

    Pokemon pokemon[10];
    int index = 0;

    while(!feof(fPtr)) {
        printf("Address if fPtr: %ld\n", fPtr->_offset);
        fscanf(fPtr, "%s%d", pokemon[index].name, &(pokemon[index].hp));
        index++;
    }

    for(int i=0; i<index; i++) {
        printf("%s %d\n", pokemon[i].name, pokemon[i].hp);
    }

    fclose(fPtr);

    if((fPtr = fopen("./files/pokedex2.txt", "w+")) == NULL) {
        fprintf(stderr, "Cannot open file\n");
        //printf("Cannot open file\n");
        return -1;
    }
    
    fclose(fPtr);

    return 0;
}