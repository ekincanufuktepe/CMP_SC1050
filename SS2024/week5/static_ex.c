#include<stdio.h>
void func();

int main() {
    func();
    func();
    func();
    return 0;
}

void func() {
    static int x = 0; // static variables are similar global variables
}