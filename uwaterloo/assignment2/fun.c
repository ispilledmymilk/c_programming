#include <stdio.h>
#include <assert.h>
#include "fun.h"

int isSophieGermainPrime(int p){
    int div = 1;
    int x = (2 * p )+ 1;
    
    if(p <= 1){
        //printf("false");
        return 0;
    }
    else{
        while ( div * div <= (2*p + 1)){
            if (p % div == 0 || x % div == 0){               
                break;
            }
            
        div++;
        }
        if(div * div % (2*p + 1) == 0){
            //printf("falsex");
            return 0;
        }
        else{
            //printf("true");
            return 1;
        }
    }
    }

int base2nat(int bs, int num){
    int decimal_value = 0;  // To store the resulting decimal value
    int power_of_base = 1;  // Start with bs^0 which is 1
    
    // Loop until num becomes 0
    while (num > 0) {
        int digit = num % 10;          // Extract the last digit
        decimal_value += digit * power_of_base;  // Convert the digit to its decimal equivalent
        num /= 10;                     // Remove the last digit from num
        power_of_base *= bs;           // Increase the power of the base for the next iteration
    }
    
    return decimal_value;
    
}

int nat2base(int base, int num){
    // Handle the case when the number is zero
    if (num == 0) {
        return 0;
    }

    int result = 0;   // Variable to store the final result
    int place = 1;    // Keeps track of the place value (units, tens, hundreds, etc.)
    int remainder;

    // Process the number by repeatedly dividing by base
    while (num > 0) {
        remainder = num % base;          // Get the current digit
        result = result + remainder * place;  // Add the digit to the result at the right place
        place *= 10;                     // Move to the next place (next digit)
        num /= base;                     // Update the number by dividing by base
    }

    return result;
}

/*int main(){
    isSophieGermainPrime(2);
}*/
