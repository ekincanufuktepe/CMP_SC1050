#include "functions.h"

// only will be visible within this file (private function)
static void functionA() {
    printf("===== FUNCTION-A BEGIN =====\n");
    printf("This is Function A\n");
    printf("====== FUNCTION-A END ======\n");
}

// this is a public function
void functionB() {
    printf("===== FUNCTION-B BEGIN =====\n");
    printf("This is Function B\n");
    printf("Calling function A\n");
    functionA();
    printf("====== FUNCTION-B END ======\n");
}