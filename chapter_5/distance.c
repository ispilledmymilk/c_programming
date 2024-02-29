#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2){
    double x_sub = pow((x2 - x1), 2);
    double y_sub = pow((y2 - y1), 2);
    
    double dist_sum = sqrt((x_sub + y_sub));
    
    return dist_sum;
}

int main(){
    double x1=0, x2=0, y1=0, y2=0;
    
    printf("Enter x1:");
    scanf("%lf", &x1);
    
    printf("Enter y1:");
    scanf("%lf", &y1);
    
    printf("Enter x2:");
    scanf("%lf", &x2);
    
    printf("Enter y2:");
    scanf("%lf", &y2);
    
    printf("The distance is %.2lf units.", distance(x1, y1, x2, y2));
}
