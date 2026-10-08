#include "static_example.h"

void increment();

int main() {
    for(int i=0; i<10; i++) {
        increment();
    }

    greet();
    // say_bye();
    
    return 0;
}

void increment() {
    static int x = 0;
    x++;
    printf("static variable x: %d\n", x);
}