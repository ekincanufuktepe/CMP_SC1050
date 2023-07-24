#include<stdio.h>

void square_values(int[]);

void square_values_v2(int*);

int main() {
    int list_of_nums[] = {10, 20, 30};
    int* numbers = NULL;
    numbers = list_of_nums;

    printf("%d\n", numbers[1]);
    printf("%d\n", *(numbers+1));

    square_values_v2(numbers);

    for(int i=0; i<3; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}

void square_values(int values[]) {
    for(int i=0; i<3; i++) {
        values[i] = values[i] * values[i];
    }
}

void square_values_v2(int* values) {
    for(int i=0; i<3; i++) {
        *(values+i) = *(values+i) * (*(values+i));
    }
}
