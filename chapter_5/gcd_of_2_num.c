#include <stdio.h>

int gcd(int a, int b){
    int x = 0, y = 0, z = 0;
    if(a>=b){
        x = a;
        y = b;
    }
    else{
        x = b;
        y = a;
    }
    
    for(int i = 1; i <= x; ++i){
        if(x%i == 0 && y%i == 0){
            z = i;
        }
    }
    return z;
}

int main(){
    int a = 0, b = 0;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    
    printf("The gcd is %d", gcd(a,b));
    
}
