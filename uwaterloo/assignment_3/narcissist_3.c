#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int power(int x, int n){
    if(x == 0){
        return 0;
    }
    else if(n == 0){
        return 1;
    }
    else{
        return (x * power(x, n - 1));
    }
}

int number_of_digits(int n){
    
    if ( n % 10 == n){
        return 1;
    }
    else{
        
        return 1 + number_of_digits(n/10);
        

    }
}

int isnarc(int n, int digits){
    int x = 0;
    
  
    if (n == 0){
        return 0;
    }
    else {
        x = n%10;
        n /= 10;

        return (power(x, digits) + isnarc(n, digits));
        
    }
  
}

bool narcissist(int n){
    if(isnarc(n, number_of_digits(n)) == n){
        return 1;
    }
    else{
        return 0;
    }
}

/*int main(){
    assert(narcissist(548834));
}*/
