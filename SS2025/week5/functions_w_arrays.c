#include<stdio.h>

void reverse_name(char name[], int size);
void i_hate_e(char name[], int size);
void print_name(char name[], int size);

int main() {
    char firstname[50] = {0, 1};
    printf("Enter your first name: ");
    scanf("%[^\n]", firstname);
    printf("name: %s\n",firstname);
    printf("Before manipulation\n");
    print_name(firstname, 50);
    reverse_name(firstname, 50);
    i_hate_e(firstname, 50);
    printf("After manipulation\n");
    printf("name: %s\n",firstname);
    print_name(firstname, 50);
    return 0;
}

void print_name(char name[], int size) {
    for(int i=0; i<size; i++) {
        printf("%c", name[i]);
    }
    printf("\n");
}

void i_hate_e(char name[], int size){
    for(int i=0; i<size; i++) {
        if(name[i] == 'e') {
            name[i] = 0;
        }
    }
}

void reverse_name(char name[], int size) {

    for(int i=size-1; i>=0; i--) {
        printf("%c",name[i]);
    }
    printf("\n");
}

