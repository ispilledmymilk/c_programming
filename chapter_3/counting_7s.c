#include <stdio.h>

int main(){
    int digit;
    int num;
    int or_num;
    int count = 0;
    
    printf("enter number: ");
    scanf("%d", &or_num);
    
    num = or_num;
    while(num != 0){
        digit = num % 10;
        if(digit == 7){
            count++;
        }
        num /= 10;
    }
    printf("%d", count);
    return 0;
}
