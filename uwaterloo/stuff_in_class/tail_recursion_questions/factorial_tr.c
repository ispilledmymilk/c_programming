#include <stdio.h>
#include <assert.h>

int factorial_t(int number , int result){
    if(number == 0){
        return result;
    }
    else{
        return factorial_t(number - 1, result*number);
    }
}

int factorial(int n){
    if (n == 0){
        return 1;
    }
    return factorial_t(n, 1);
}

int main(){
    assert(factorial(5) == 120);
}
