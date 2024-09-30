#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int isnarc(int n){
    int x = 0;
  
    if (n == 0){
        return 0;
    }
    else{
        x = n%10;
        n /= 10;

        return ((x*x*x) + isnarc(n));
        
    }
  
}

bool narcissist(int n){
    if(isnarc(n) == n){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    assert(narcissist(9));
    assert(narcissist(153));
    assert(narcissist(370));
    assert(narcissist(92727));
    assert(narcissist(548834));
    assert(!narcissist(10));
    assert(!narcissist(92));
    assert(!narcissist(1535));
    assert(!narcissist(1234));
    assert(!narcissist(92726));
}
