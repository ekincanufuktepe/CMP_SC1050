//#include<stdio.h>
#include<stdlib.h>
#include "encryption_functions.h"

int main() {

    char* secretText;
    secretText = NULL;

    secretText = calloc(100, sizeof(char));
    printf("Enter your secret message: ");
    fgets(secretText, 100, stdin);
    encrypt(secretText, 3);
    printf("Your encrypted text: %s\n", secretText);
    decrypt(secretText, 3);
    printf("Your decrypted text: %s\n", secretText);

    return 0;
}