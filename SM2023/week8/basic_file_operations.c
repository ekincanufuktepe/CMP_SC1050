#include<stdio.h>

int main() {

    FILE* filePtr;
    filePtr = NULL;

    filePtr = fopen("happy_bday_lyrics.txt", "a+");

    if(filePtr == NULL) {
        printf("Error: Cannot open file!\n");
        return -1;
    }
    fprintf(filePtr, "Happy birthday to you!\n");
    fprintf(filePtr, "Dear Dennis Ritchie!\n");
    fclose(filePtr);

    return 0;
}

