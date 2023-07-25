#include<stdio.h>

int main() {

    FILE* filePtr;
    filePtr = NULL;

    filePtr = fopen("happy_bday_lyrics.txt", "r");

    if(filePtr == NULL) {
        printf("Error: Cannot open file!\n");
        return -1;
    }

    //char* line;
    //line = NULL;
    char line[25];

    printf("Happy Birthday song by Dennis Ritchie\n");
    //fscanf(filePtr, "%s", line);
    int line_counter = 1;
    fgets(line, 25, filePtr);
    
    while(!feof(filePtr)) {
        printf("Line #%d: %s", line_counter, line);
        fgets(line, 25, filePtr);
        line_counter++;
    }

    fgets(line, sizeof(line), stdin);   // alternative and secure alternative for scanf
    printf("Data: %s\n", line);
    
    // don't forget to close you files!
    // This can lead to unsaved file operations, and memory leaks
    fclose(filePtr); 

    return 0;
}