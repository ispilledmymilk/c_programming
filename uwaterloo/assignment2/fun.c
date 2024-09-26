#include <stdio.h>
#include <assert.h>
#include "fun.h"

int isSophieGermainPrime(int p){
    //dont know why it is printing twice
    int div = 2;
    int x = 2 * p + 1;
    
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
    base2nat(7, 1);
    printf("\n");
    nat2base(5, 1659);
}*/
