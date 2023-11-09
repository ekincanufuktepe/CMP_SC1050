#include "encryption_functions.h"

void encrypt(char* plainText, int key) {
    while(*plainText != '\0') {
        if(*plainText >= 97 && *plainText <= 122) {
            *plainText = (*plainText + key - 97)%26 + 97;
            //printf("%c\n", *plainText);
        }
        plainText++;
    }
}

void decrypt(char* plainText, int key) {
    while(*plainText != '\0') {
        if(*plainText >= 'a' && *plainText <= 'z') {
            *plainText = ((*plainText - key)-'a')%26 + 'a';
        }
        plainText++;
    }
}