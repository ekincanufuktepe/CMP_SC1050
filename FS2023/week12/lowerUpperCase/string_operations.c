#include "string_operations.h"

void toLowerCase(char* strData) {
    while(*strData != '\0') {
        if(*strData >= 65 && *strData <= 90) {
            *strData = *strData + 32;   // convert uppercase to lowercase
        }
        strData = strData + 1;
    }
}
void toUpperCase(char* strData) {
    while(*strData != '\0') {
        if(*strData >= 97 && *strData <= 122) {
            *strData = *strData - 32;   // convert lowercase to uppercase
        }
        strData = strData + 1;
    }
}
void printData(char* strData) {
    return;
}
