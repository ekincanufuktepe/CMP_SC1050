#include<stdio.h>

void toUpperCase(const char* const letter);


int main() {
    // char letter = 'aBc';
    char letter[3] = "aBc";
    // char x = 'a';
    // char y = 'z';
    // printf("%d, %d\n", x, y);
    toUpperCase(letter);
    printf("Upper: %s\n", letter);
    return 0;
}

// cannot modify address and data, this code will not compile
void toUpperCase(const char* const letter) {
    while(*letter != '\0') {
        int asciiValue = (int)(*letter);
        if(asciiValue>96 && asciiValue<123) {
            (*letter) = (*letter) - 32;
        }
        letter++;
    }
}