#include <stdio.h>

int perfect_num(int num){
    int sum = 0;
    for(int i = 1; i< num; ++i){
        if(num % i == 0){
           sum += i;
           
        }
    }
    
    if(sum == num){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int num = 0;
    printf("Enter the number to check: ");
    scanf("%d", &num);
    
    int x = perfect_num(num);
    if(x == 1){
        printf("This number is perfect!");
    }
    if(x == 0){
        printf("This number is not perfect!");
    }
    
}
