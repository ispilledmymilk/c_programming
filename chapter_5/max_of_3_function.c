#include <stdio.h>

int maximum(int x, int y, int z){
    int max = x;
    
    if(y > max){
        max = y;
    }
    if(z > max){
        max = z;
    }
    
    return max;
}

int main(){
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    printf("Maximum is %d\n", maximum(num1, num2, num3));
    return 0;
}
