#include<stdio.h>
// enums hold integer values
enum dogs {LAB='a', ROT, BC};

enum cats {TIGER=0, COUGAR, LION, LEOPARD, CHEETAH};
// you can typedef enums like we did with structs
typedef enum cats Cats;

int main() {
    // enum cats cat;
    Cats cat;
    cat = TIGER + LION;
    enum dogs dog[2];
    dog[0] = ROT;
    dog[1] = BC;
    printf("Dog value: %c\n", dog[1]);
    
    return 0;
}