#include <stdio.h>

int even_odd(int number){
    if(number % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int num = 0;
    printf("Enter the number you want to check: ");
    scanf("%d", &num);
    
    int x = even_odd(num);
    if(x==0){
        printf("The number is odd.");
    }
    else{
        printf("The number is even.");
    }
    
}
