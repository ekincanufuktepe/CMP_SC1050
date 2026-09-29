#include "armstrong.h"
#include "lib/myLib.h"

int main() {
    int num = 371;

    printf("%d is %san Armstrong number!\n", 
        num, 
        armstrong_check(num) ? "" : "NOT ");
    
    return 0;
}