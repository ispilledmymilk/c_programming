#include <stdio.h>

int gcd(int x, int y){
    if(y==0){
        return x;
    }
     return gcd(y, x % y);
}

int main(){
    int a =0, b = 0;
    
    printf("Enter the number 1: ");
    scanf("%d", &a);
    
    printf("Enter the number 2: ");
    scanf("%d", &b);
    
    printf("The GCD of the two numbers are %d", gcd(a,b));
    return 0;
}
