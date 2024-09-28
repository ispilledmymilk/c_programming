#include <stdio.h>

int digit_Extraction(int num){
    int y = 1;
    while(num != 0){
        int x = num % 10;
        num = num / 10;
        
        printf("%d ", x);
        
    }
}

void numberPairs(int num){
    int num2 = digit_Extraction(num);
    while(num2 != 0){
        int x = num2 % 10;
        num2 = num2 / 10;
        printf("%d ", x);
    }
}

int main(){
    digit_Extraction(1234);
}
