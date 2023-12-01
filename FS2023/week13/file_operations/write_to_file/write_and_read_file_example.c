#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

    FILE* fPtr;
    fPtr = NULL;

    // Error checking while openining file
    if((fPtr = fopen("diary.txt", "w")) == NULL) {
        fprintf(stderr, "Cannot open file!"); // print error message
        return -1; // terminate program and return an error code by choice
    }
    else {
        printf("File opened successfully!\n");
        // Dynamically allocate space for recieving input for the user
        char* text = malloc(sizeof(char)*1000);
        // get input from the user with a limit of 1000 characters
        fgets(text, 1000, stdin);
        // read file until EOF (end of file)
        while(!feof(stdin)) {
            // write text into the file
            fprintf(fPtr,"%s", text);
            // get new input from the user
            fgets(text, 1000, stdin);
        }
        free(text); // deallocting for dynamically allocated space, otherwise you will have memory leaks
    }
    fclose(fPtr); // close file when done, otherwise you will have memory leaks

    // open file for reading "./" corresponds to current directory
    fPtr = fopen("./files/diary.txt", "r");
    // error check
    if(fPtr == NULL) {
        fprintf(stderr, "Cannot open/read file");
        return -2;
    }

    //char* text = malloc(sizeof(char)*1000);
    char text[1000];
    int line_count = 1;
    while(!feof(fPtr)) {
        // fscanf(fPtr, "%s", text);
        // write to the file
        fgets(text, 1000, fPtr);
        // print line by line, including their line number
        printf("Line #%d: %s", line_count, text);
        strncpy(text, "\0", 1000); // set the text variable to "\0" for clearing
        // will do a similar thing with strncpy
        // for(int i=0; i<1000; i++) {
        //     text[i] = '\0';
        // }
        // increment line number
        line_count++;
    }


    return 0;
}