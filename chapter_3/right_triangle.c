#include <stdio.h>

int main(){
    float a = 0, b = 0, c = 0;
    
    printf("enter side 1: ");
    scanf("%f",&a);
    printf("enter side 2: ");
    scanf("%f",&b);
    printf("enter side 3: ");
    scanf("%f",&c);
    
    if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a ){
        printf("the sides can form a right triangle.");
    }
    else{
        printf("not a right triangle. ");
    }
}
