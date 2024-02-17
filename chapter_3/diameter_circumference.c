#include <stdio.h>
#define pi 3.14159

int main(){
    float radius = 0;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    printf("the diameter is %f\n", radius*2);
    printf("the circumference is %f", radius*2*pi);
}
