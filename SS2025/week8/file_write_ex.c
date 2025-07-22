#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]) {

    if(argc != 2) {
        fprintf(stderr, "You need two arguments!\n");
        return -2;
    }

    // printing arguments
    for(int i=0; i<argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }

    FILE* fPtr = NULL;

    // if((fPtr = fopen("my_secret_diary.txt", "w+")) == NULL) {
    if((fPtr = fopen(argv[1], "w+")) == NULL) {
        fprintf(stderr, "Cannot create file\n");
        return -1;
    }

    char text[1000] = {0};

    for(int i=0; i<5; i++){
        fgets(text, 1000, stdin);
        fputs(text, fPtr);
    }
    // printf("User input: %s\n", text);
    fclose(fPtr);

    return 0;
}
