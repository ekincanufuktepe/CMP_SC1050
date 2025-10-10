#include "static_var.h"

int inc() {
     int x = 0;
    x++; 
    return x;
}

static int _exam_handler(int op, int exam) {
    static int e1 = 0;
    static int e2 = 0;

    if(op == 1) {
        e1 = exam;
        return e1;
    }
    else if(op == 2) {
        e2 = exam;
        return e2;
    }
    else if(op == 3) {
        return e1;
    }
    else if(op == 4) {
        return e2;
    }
    else if(op == 5) {
        return (e1+e2)/2.0;
    }
    return -1;
}

int set_exam1(int exam){
    return _exam_handler(1,exam);
}
int set_exam2(int exam){
    return _exam_handler(2,exam);
}

int get_exam1(){
    return _exam_handler(3,0);
}
int get_exam2(){
    return _exam_handler(4,0);
}

int average_of_exams(){
    int ex1 = _exam_handler(3, 0);
    int ex2 = _exam_handler(4, 0);
    return (ex1+ex2)/2.0;
}