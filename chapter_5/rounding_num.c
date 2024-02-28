#include <stdio.h>
#include <math.h>

int rounding_numbers(float x){
    int y = floor(x + 0.5);
    return y;
}

int main(){
    float num = 0;
    printf("Enter the number to be rounded: ");
    scanf("%f", &num);
    
    printf("The rounded off number is %d", rounding_numbers(num));
    
    return 0;
}
