#include <stdio.h>
#include <assert.h>

int fib(int num){
    if(num == 0 || num == 1){
        return num;
    }
    
    else{
        return fib(num - 1) + fib(num - 2);
    }
    
}

int main(){
        int number = 0;
        printf("Enter the number: ");
        scanf("%d", &number);
        printf("The fib of %d is %d\n", number, fib(number));
    
    
}
