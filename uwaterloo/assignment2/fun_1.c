#include <stdio.h>
#include <assert.h>
#include "fun.h"

int isSophieGermainPrime(int p){
    //dont know why it is printing twice
    int div = 2;
    int x = (2 * p )+ 1;
    
    if(p <= 1){
       return 0;
    }
    else{
        while ( div * div <= p){
            if (p % div == 0 || x % div == 0){
                return 0;
            }
            else
                return 1;
            }
            div++;
        }
        
    }

    

int base2nat(int bs, int num){
    int decimal_value = 0;  
    int power = 1;          
    
    while (num > 0) {
        int digit = num % 10;      
        decimal_value += digit * power;  
        num /= 10;                 
        power *= bs;
    }
    
    printf("%d", decimal_value);
}

int nat2base(int bs, int num){
    
    if (num == 0) {
        printf("0\n");
        
    }

    
    int reversed = 0, count = 0, remainder;

    while (num > 0) {
        remainder = num % bs;         
        reversed = reversed * 10 + remainder; 
        num /= bs;                
    }

    
    while (reversed > 0) {
        printf("%d", reversed % 10);
        reversed /= 10;                 
    }

    printf("\n"); 
}
