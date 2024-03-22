#include <stdio.h>

typedef struct {
    int x, y;
}point;

point scale_point(point dig, int f){
    point answer;
    answer.x = dig.x * f;
    answer.y = dig.y * f;
    
    return(answer);
    
}

int main(){
    point p;
    int factor = 0;
    printf("Enter the first number: ");
    scanf("%d", &p.x);
    
    printf("Enter the second number: ");
    scanf("%d", &p.y);
    
    printf("the number you want to multiply: ");
    scanf("%d", &factor);
    
    point s_point = scale_point(p, factor);
    printf("The first number is %d\n The second number is %d", s_point.x, s_point.y);
    
}
