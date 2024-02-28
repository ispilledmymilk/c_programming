#include <stdio.h>

int ismultiple(int num1, int num2){
    if(num1 == 0 || num2 == 0){
        return 0;
    }
    else if(num1 > num2){
        if(num1 % num2 == 0){
            return 1;
        }
        else{
            return 0;
        }
    }
    else if(num1 < num2){
        if(num2 % num1 == 0){
            return 1;
        }
        else{
            return 0;
        }
    }
}

int main(){
    int num1 = 0, num2 = 0;
    printf("Enter the numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int x = ismultiple(num1, num2);
    if(x==1){
        printf("Yes!");
    }
    else if(x == 0){
        printf("No!");
    }
}
