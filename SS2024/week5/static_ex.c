#include<stdio.h>
void func();

for(int x=0, char z='a')

int main() {
    func();
    func();
    func();
    return 0;
}

void func() {
    static int x = 0; // static variables are similar global variables
    printf("x: %d\n", x++);
}