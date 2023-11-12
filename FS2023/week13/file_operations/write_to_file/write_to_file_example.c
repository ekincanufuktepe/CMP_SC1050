#include<stdio.h>
#include<stdlib.h>

int main() {

    FILE* fPtr;
    fPtr = NULL;

    if((fPtr = fopen("diary.txt", "w")) == NULL) {
        fprintf(stderr, "Cannot open file!");
        return -1;
    }
    else {
        printf("File opened successfully!\n");
        char* text = malloc(sizeof(char)*1000);
        fgets(text,1000,stdin);
        while(!feof(stdin)) {
            fprintf(fPtr, "%s", text);
            fgets(text,1000,stdin);
        }
        
    }
    fclose(fPtr);

    return 0;
}