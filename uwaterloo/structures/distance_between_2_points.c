#include <stdio.h>

typedef struct {
    int p1, p2;
} point;

int distance(point x, point y){
    int dist = (x.p1 - y.p1)*(x.p1 - y.p1) + (x.p2 - y.p2)*(x.p2 - y.p2);
    
    return dist;
}

int main(){
     point point1;
     point point2;
     
     printf("Enter the coordinates of the first point: ");
     printf("Separate it by a space! ");
     scanf("%d%d", &point1.p1, &point1.p2);
     
     printf("Enter the coordinates of the second point: ");
     printf("Separate it by a space! ");
     scanf("%d%d", &point2.p1, &point2.p2);
     
     printf("%d", distance(point1, point2));
}
