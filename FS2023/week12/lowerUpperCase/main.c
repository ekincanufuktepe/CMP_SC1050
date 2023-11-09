#include<stdio.h>
#include "string_operations.h"
#include<string.h>
#include<stdlib.h>

int main() {
    //char str[] = "EkinCan!!";   // 9 characters
    //char* str = "asb";    // will not work!!! 
    // str = malloc(sizeof(char)*10); // does not initialize the memory
    str = calloc(10,sizeof(char)); // allocates and initializes the allocated memory
    strncpy(str, "EkinCan!!\0", 10);
    printf("%s\n", str);
    //toLowerCase(str);
    toUpperCase(str);
    printf("%s\n", str);
    free(str);
    return 0;
}