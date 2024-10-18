#include<stdio.h>

void encrpyt(char* const msg, int msg_len, int shift);
void decrpyt(char* const msg, int msg_len, int shift);
void printMessage(const char* const msg);

int main() {

    char secret_msg[20] = "I hate Dr. Ekin\n";
    encrpyt(secret_msg, 20, 3);
    // printf("Secret message: %s\n", secret_msg);
    printMessage(secret_msg);
    decrpyt(secret_msg, 20, 3);
    // printf("Decrypted secret message: %s\n", secret_msg);
    printMessage(secret_msg);

    return 0;
}

void encrpyt(char* const msg, int msg_len, int shift) {
    for(int i=0; i<msg_len; i++) {
        *(msg+i) += shift;
    }
}
void decrpyt(char* const msg, int msg_len, int shift) {
        for(int i=0; i<msg_len; i++) {
        *(msg + i) -= shift;
        // msg++;
    }
}

void printMessage(const char* const msg) {
    printf("Message: %s\n", msg);
}
