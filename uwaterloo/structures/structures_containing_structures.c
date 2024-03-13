#include <stdio.h>

typedef struct{
    double x;
    double y;
}point;

typedef struct {
    point p1;   // p1 has x and y values
    point p2;   // p2 has x and y values
} line;

int main(){
    // 2.5 and -6 are the values of a and y for p1 and the other 2 are for p2
    line ln1 = { {2.5, -6}, {-10.25, 17}};
    double a;
    // for the calculation of a, we first call ln1 and then p1 and then the members of the point struct.
    a = ln1.p1.x + ln1.p2.x;
    printf("%f", a);

    return 0;
}
