#include<stdio.h>

#pragma pack(push, 1)   // set alignment to 1 byte
struct MyStruct {
    char a;
    int b;
    double c;
};
#pragma pack(pop)

int main() {
    struct MyStruct x;
    printf("size: %lu\n", sizeof(x));
    return 0;
}