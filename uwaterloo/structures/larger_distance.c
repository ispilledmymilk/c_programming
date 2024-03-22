#include <stdio.h>

typedef struct{
    int x;
    int y;
}point;

point find(point p1, point p2){
    int dist1 = (p1.x * p1.x) + (p1.y * p1.y);
    int dist2 = (p2.x * p2.x) + (p2.y * p2.y);
    
    if(dist1 >= dist2){
        return p1;
    }
    else{
        return p2;
    }
}

int main(){
    point p1;
    point p2;
    
    printf("Enter the first point, separated by a space: ");
    scanf("%d %d", &p1.x, &p1.y);
    
    printf("Enter the second point, separated by a space: ");
    scanf("%d %d", &p2.x, &p2.y);
    
    point large_dist =  find(p1, p2);
    printf("(%d %d) is the point with the larger distance!",large_dist.x, large_dist.y);
}
