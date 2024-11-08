#include<stdio.h>
#include<string.h>

int main() {

    char name[20] = "Ekin";
    char lastname[20] = "Ufuktepe";
    char fullname[40] = "";

    printf("First name: %s\n", name);
    printf("Lastname: %s\n", lastname);
    strcat(fullname, name);
    //char whitespace[2] = " ";
    char* whitespace = " ";
    //*whitespace = 'a';
    strcat(fullname, whitespace);
    strcat(fullname, lastname);
    printf("Fullname: %s\n", fullname);

    return 0;
}