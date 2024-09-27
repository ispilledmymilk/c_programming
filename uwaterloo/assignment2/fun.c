#include <stdio.h>
#include <assert.h>
#include "fun.h"

int isSophieGermainPrime(int p){
    //dont know why it is printing twice
    int div = 2;
    int x = (2 * p )+ 1;
    
    if(p <= 1){
       printf("false");
    }
    else{
        while ( div * div <= p){
            if (p % div == 0 || x % div == 0){               
                break;
            }
            
        div++;
        }
        if(div * div <= p ){
            printf("false");
            //return 0;
        }
        else{
            printf("true");
            //return 1;
        }
    }
}

int base2nat(int bs, int num){
    int value = 0;  
    int power = 1;   
    int digit;
    
    
    /*while (num > 0) {
        int digit = num % 10;      
        decimal_value += digit * power;  
        num /= 10;                 
        power *= bs;
    }
    
    printf("%d", decimal_value);*/
    for(int n = num; n > 0; n/=10){
        digit = n % 10;
        value += digit * power;
        power *= bs;
        printf("%d", value);
    }
    
}

int nat2base(int base, int num){
    
    if (num == 0) {
        printf("0\n");
    }
    
    int reversed = 0, count = 0, remaindr = 0;

    while (num > 0) {
        remaindr = num % base;         
        reversed = reversed * 10 + remaindr; 
        num /= base;                
    }
    while (reversed > 0) {
        printf("%d", reversed % 10);
        reversed /= 10;                 
    }
    printf("\n"); 
}

/*int main(){
    isSophieGermainPrime(13);
} */
