#include <stdio.h>

int reverse_digits(int num){
    int reverse = 0;
    
    while(num != 0){
        
    int digit = num % 10;
    reverse =  reverse * 10 + digit;
    num /= 10;
        
    }
    
    return reverse;
}

int main(){
    int num = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    printf("%d", reverse_digits(num));
}
