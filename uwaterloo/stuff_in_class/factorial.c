#include <stdio.h>

int factorial(unsigned int n){
    if ( n == 0 || n == 1){
        return 1;
    }
    else{
        return n * factorial(n - 1);
    }
}

int main(){
    int x = 0;
    printf("Enter a value to find the factorial for: ");
    scanf("%d", &x);
    printf("The factorial of %d is %d", x , factorial(x));
    
    return 0;
}
