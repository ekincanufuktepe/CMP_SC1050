#include<stdio.h>

void to_lower_case(char*);
void print_char_by_char(char*);

int main() {

    //char* name1 = "HeLLo!";     // bad way to manipulate multiple data (Seg. fault)
    char name2[] = "HeLLo!";    // better way to manipulate multiple data
    int list_of_nums[] = {10, 20, 30};
    int* numbers = NULL;
    
    numbers = list_of_nums;


    //print_char_by_char(name);
    printf("%s\n", name2);
    //print_char_by_char(name1);
    to_lower_case(name2);
    printf("%s\n", name2);

    return 0;
}

void print_char_by_char(char* name) {
    while(*name != '\0') {
        printf("%c\n", *name);
        name++;
    }
}

void to_lower_case(char* name) {
    
    while(*name != '\0') {

        //if(*name >= 97 && *name <= 122){ // lower case range
        if(*name >= 65 && *name <= 90){
            char lower = *name + 32;
            *name = lower;
            printf("%c\n", lower);
        }
        name++;
    }
}