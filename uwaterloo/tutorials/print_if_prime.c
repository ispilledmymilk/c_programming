#include <stdio.h>
#include <stdbool.h>

int print_primes(int num, int divisor){
    if (num <= 1){
        return false;
    }
    if(divisor == 1)
    return true;
    
    if (num % divisor == 0)
    return false;
    
    return print_primes(num, divisor - 1);
}

bool prime(int n){
    return print_primes(n, n / 2);
}

int main(){
    int num = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    if(prime(num) == 1){
        printf("Yes it is prime!");
    }
    else
    printf("No it is not prime!");
}
