#include "static_example.h"

static void say_bye() {
    printf("See you later!\n");
}

void greet() {
    printf("Hello there!\n");
    say_bye();
}

