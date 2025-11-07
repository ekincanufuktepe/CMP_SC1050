#include<stdio.h>

void func(int* p) {
    printf("sizeof: %lu\n", sizeof(p));
}

int main() {

    int x[20] = {0};

    printf("(x) sizeof: %lu\n", sizeof(x));

    func(x);
    return 0;
}