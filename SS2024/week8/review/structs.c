#include<stdio.h>
#include<math.h>
#include<stdlib.h>

typedef struct point {
    int x;
    int y;
    // char z;
    // char w[20];
} Point;

double calculate_distance(Point, Point);
double calculate_distance_v2(Point*, Point*);
void shift_point_by_x(Point*, int); //good
// void shift_point_by_x(Point, int); //bad

int main() {

    // Point a = {0, 1};
    // Point b;
    // b.x = 2;
    // b.y = 10;

    // double distance = 0;
    // distance = sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
    // printf("Distance: %lf\n", distance);
    // // printf("x:%d, y:%d, z:%c\n", a.x, a.y, a.z);

    Point* a = NULL;
    a = malloc(sizeof(Point));
    a->x = 0;
    a->y = 1;

    Point b;
    b.x = 2;
    b.y = 10;

    printf("Distance: %lf\n", calculate_distance(*a, b));
    shift_point_by_x(*a, 2);
    printf("Distance (v2): %lf\n", calculate_distance_v2(a, &b));
    // printf("x:%d, y:%d, z:%c\n", a.x, a.y, a.z);
    free(a);
    return 0;
}

double calculate_distance(Point p1, Point p2) {
    return sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
}

void shift_point_by_x(Point* p, int pad) {
    p->x += pad;
}

// void shift_point_by_x(Point p, int pad) {
//     p.x += pad;
// }

double calculate_distance_v2(Point* p1, Point* p2) {
    return sqrt(pow((p1->x - p2->x), 2) + pow((p1->y - p2->y), 2));
}