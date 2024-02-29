#include <stdio.h>

int prime_number(int number){
    int sum = 0;
    int i =1;
    while(i<number){
        if(number % i == 0){
            sum++;
        }
        i++;
        
    }
    return sum;
}

int main(){
    int num = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    int x = prime_number(num);
    if(x == 1){
        printf("Yes it is prime!");
    }
    else if(x> 1){
        printf("No it is not.");
    }
}
