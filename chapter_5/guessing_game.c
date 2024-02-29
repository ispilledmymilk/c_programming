#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate_number(){

    return (1 + rand() % 1000);
}

int main(){
    srand(time(NULL));
    
    int x = generate_number();
    
    int num = 0;
    printf("Enter your guess: ");
    scanf("%d", &num);
    while(num != x){
    if(num > x && num <= 1000){
        printf("The guess is too high!\n");
    }
    else if(num < x && num >= 1){
        printf("The guess is too low!\n");
    }
    printf("Enter your guess: ");
    scanf("%d", &num);
    
    }
    if(num == x){
    printf("That is the right guess!");
    }
}
