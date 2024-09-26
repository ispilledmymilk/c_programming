#include <stdio.h>

int fib(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return (fib(n - 1) + fib(n - 2));
    }
}

int main(){
    printf("%d", fib(5));
}
//note that this method is slow and not efficient
