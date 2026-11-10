#include<stdio.h>
#include<string.h>

void readByCharacters(char* str, int size);

int main() {
    // char name[] = "ekin";
    char name[] = {'e', 'k', 'i', 'n', '\0'};
    char* const p = name;
    int string_size = strlen(name);
    printf("String size: %d\n", string_size);
    readByCharacters(p, string_size);
    printf("Encrypted name: %s\n", name);

    char* newName = "john";
    printf("New name: %s\n", newName);
    // newName++;
    printf("(before shift)newName[0]: %c\n", newName[0]);
    // newName[0] += 1;
    // printf("(after shift)newName[0]: %c\n", newName[0]);
    // readByCharacters(newName, string_size);
    int x = 5;
    &x += 1;

    return 0;
}

void readByCharacters(char* str, int size) {
    for(int i=0; i<size; i++) {
        printf("%c", ++(*str));
        str++;
    }
}