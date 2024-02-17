#include <stdio.h>

int main(){
    float a = 0, b = 0, c = 0;
    
    printf("enter side 1: ");
    scanf("%f",&a);
    printf("enter side 2: ");
    scanf("%f",&b);
    printf("enter side 3: ");
    scanf("%f",&c);
    
    if(a+b> c && a+c>b && b+c>a){
        printf("the sides can form a triangle.");
    }
    else{
        printf("not a triangle. ");
    }
}
