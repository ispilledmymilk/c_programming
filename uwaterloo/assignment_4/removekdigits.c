#include <stdio.h>

int array(long long int n, int c){
    while(n != 0){
        n /= 10;
        c++;
    }
    
    int numberarray[c];
    c = 0;
    
    while(n != 0){
        numberarray[c] = n % 10;
        n /= 10;
        c++;
    }
}

int main(){
    array(4334, 0);
}
