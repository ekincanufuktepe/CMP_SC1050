#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

typedef struct person{
    char name[20];
} Person;

int main(int argc, char* argv[]) {

    if(argc != 2) {
        fprintf(stderr, "You must have 2 arguments. Example: ./a.out 5\n");
        return 3; // error code for invalid argument numbers
    }

    for(int i=0; i<argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }

    int size = atoi(argv[1]);
    printf("size is now: %d\n", size);

    Person* people = malloc(size*sizeof(Person));

    printf("size of Person: %lu, size of dyn. alloc space: %lu\n", sizeof(Person), sizeof(*people));


    for(int i=0; i<size; i++){
        char tmpName[20];
        fgets(tmpName, 20, stdin);
        strncpy((people+i)->name, tmpName, 20);
    }

    for(int i=0; i<size; i++){
        printf("Name: %s\n", (people+i)->name);
    }

    free(people);
    people = NULL;
    return 0;
}