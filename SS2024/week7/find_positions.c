#include<stdio.h>
#define SIZE 10
// core function
void find_positions(int array[], int positions[], int data, int array_size);
// helper function for 'find_positions'
void reset_positions(int positions[], int position_array_size);
void print_positions(int positions[], int size);

int main() {

    int array[SIZE] = {1,7,3,6,7,9,0,8,3,1};
    int positions[SIZE];

    find_positions(array, positions, 4, SIZE);
    find_positions(array, positions, 9, SIZE);
    find_positions(array, positions, 1, SIZE);

    return 0;
}

void reset_positions(int positions[], int position_array_size) {
    for(int i=0; i<position_array_size; i++) {
        positions[i] = -1;
    }
}

void find_positions(int array[], int positions[], int data, int array_size) {
    //reset_positions(positions, array_size);
    int counter = 0;
    for(int i=0; i<array_size; i++) {
        if(array[i] == data) {
            positions[counter++] = i;
        }
    }
    print_positions(positions, counter);
}

void print_positions(int positions[], int size) {
    if(size == 0) {
        printf("There are no occurrences!\n");
    }
    else {
        printf("They are located in index: ");
        for(int i=0; i<size; i++) {
            printf("%3d", positions[i]);
        }
        printf("\n");
    }

}
