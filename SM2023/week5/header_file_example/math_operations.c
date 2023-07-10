#include "math_operations.h"

static float multiply(float x, float y) {
    return x * y;
}

float power(float x, float y) {
    float result = 1;
    for(int i = 0; i<y; i++) {
        result = multiply(result, x);
        //result = result * x;
    }
    return result;
}

float absolute(float x) {
    if(x < 0) {
        return x * -1;
    }
    return x;
}