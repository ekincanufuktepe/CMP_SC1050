#include<stdio.h>

int main(int argc, char* argv[]) {

    if(argc != 2) {
        fprintf(stderr, "You need 2 arguments dummy!\n");
        return 5;
    }

    FILE* fPtr;

    if((fPtr = fopen(argv[1], "a+")) == NULL) {
        fprintf(stderr, "File opening process failed!\n");
        return 3;
    }

    char text[100] = {0};

    fgets(text, 99, stdin);

    fprintf(fPtr, "%s", text);
    fclose(fPtr);

    if((fPtr = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "File opening process failed!\n");
        return 2;
    }

    char read_text[100] = {0};

    int line_num = 1;
    while(!feof(fPtr)) {
        // fscanf(fPtr, "%s", read_text);
        fgets(read_text, 99, fPtr);
        printf("Text in line %d: %s\n", line_num, read_text);
        line_num++;
    }

    fclose(fPtr);
    return 0;
}