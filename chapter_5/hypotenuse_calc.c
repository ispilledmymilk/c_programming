#include <stdio.h>
#include <math.h>

float hyp_calc(double side1, double side2){
    double hyp = sqrt((side1 * side1) + (side2 * side2));

    return hyp;
}

int main(){
    double s1 = 0, s2 = 0;
    
    printf("Enter the sides: ");
    scanf("%lf%lf", &s1, &s2);
    
    printf("the hyp is %.2lf\n", hyp_calc(s1, s2));
    return 0;
}
