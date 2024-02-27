#include <stdio.h>

unsigned long long int factorial(int number){
    
    if(number <= 1){
        return 1;
    }
    else{
        return number*factorial(number - 1);
    }
}

int main(){
   
   for(int i = 0; i<=21; i++){
       printf("%d! is %llu\n", i, factorial(i));
   }
 
}
