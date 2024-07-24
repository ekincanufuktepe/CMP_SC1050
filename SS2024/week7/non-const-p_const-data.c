#include<stdio.h>

void toUpperCase(const char* letter);


int main() {
    char letter = 'a';
    printf("Upper: %c\n", letter - 32);
    return 0;
}

// will not be compiled because non-constant pointer and constant data.
// you need to remove the const.
void toUpperCase(const char* letter) {
    (*letter) = (*letter) - 32;
}