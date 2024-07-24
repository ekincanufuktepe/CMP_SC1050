#include<stdio.h>

int main() {

    FILE* fPtr;

    if((fPtr = fopen("secret_diary.txt", "w")) == NULL) {
        fprintf(stderr, "Couldn't open file!\n");
        return -1;
    }

    // fprintf(fPtr, "Today was scary, all the students were staring at me...\n");
    // fprintf(fPtr, "I hope the final exam goes well..\n");
    // fprintf(fPtr, "Today is too hot!!!\n");
    //fgets()
    // fputs("Tomorrow is going to be hot!!!\n", fPtr);

    while(!feof(stdin)){
        char text[1000] = {0};
        fgets(text, 1000, stdin);
        fprintf(fPtr, "%s", text);
    }

    fclose(fPtr);

    return 0;
}