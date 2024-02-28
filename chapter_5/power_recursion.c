#include <stdio.h>

int power(int base, int exponent){
    if(exponent == 0){
        return 1;
    }
    else{
    int result = base * power(base, (exponent - 1));
    return result;
    }
}

int main(){
    printf("Enter the base: ");
    int base = 0;
    scanf("%d", &base);
    
    printf("Enter the exponent: ");
    int exponent = 0;
    scanf("%d", &exponent);
    
    printf("The power is %d", power(base, exponent));
    
    return 0;
}
