#include<stdio.h>

#pragma pack(push, 1) // set alignment to be 1 byte

struct my_struct{
    char a;
    double c;
    int b;
};

#pragma pack(pop)

int main() {
    struct my_struct m;
    printf("Size of my_struct: %lu\n", sizeof(m));
    return 0;
}