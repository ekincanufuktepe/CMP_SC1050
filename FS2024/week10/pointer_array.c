#include<stdio.h>
#include<string.h>

int getStringLength(char* str);

int main() {

    char* suit[4] = {"Hearts", "Clubs", "Diamonds", "Spades"};

    // printf("Value at suit[0]: %s\n", suit[1]);
    for(int i=0; i<4; i++) {
        printf("suit[%d] Address: %p, Value: %s\n", i, suit[i], suit[i]);
        printf("Size: %d\n\n", getStringLength(suit[i]));
        // printf("Size: %lu\n\n", strlen(suit[i]));
    }

    return 0;
}

int getStringLength(char* str) {
    int size = 0;
    while(*str != '\0') {
        size++;
        str++;
    }
    return size;
}