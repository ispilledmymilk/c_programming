#include <stdio.h>

int main(){
    int number = 0;
    printf("Enter the number: ");
    scanf("%d", &number);
    int rem = number%10;
    int quo = number/10;
    //printf("%d %d", rem, quo);
    
    if(quo < 4){
        for(int j = 1; j<=quo; j++){
            printf("X");
        }
    }
    else if(quo == 4){
        printf("XL");
    }
    else if(quo == 5){
        printf("L");
    }
    else if(quo>5){
        printf("X");
        int num = quo - 5;
        
        if(num < 4){
        for(int x = 1; x<=num; x++){
            printf("I");
        }}
        else{
            printf("C");
        }
    }
    if(rem < 4){
        for(int i = 1; i<=rem; i++){
            printf("I");
        }
    }
    else{
        printf("V");
        int remm = rem - 4;
        for(int z = 1; z<remm; z++){
            printf("I");
        }
    }
}
