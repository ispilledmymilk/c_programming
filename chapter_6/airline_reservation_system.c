#include <stdio.h>

int main(){
    int input_seat = 0;
    int first_class = 0;
    int economy = 5;
    int i = 1;
    for(int i = 1; i <11; ++i){
        printf("Please type 1 for first class, type 2 for economy: ");
        scanf("%d", &input_seat);
        printf("\n");
        
        if(input_seat == 1){
            first_class++;
            if(first_class < 5){
                printf("Your seat is %d\n", first_class);
            }
            else if(first_class > 5){
                printf("First class is full!\n");
                break;
            }
        }
        else if(input_seat == 2){
            ++economy;
            printf("Your seat is %d\n", economy);
            if(first_class > 10){
                printf("Economy is full!\n");
        }
        
    }
    else{
        printf("Wrong input!");
    }
    }
    
    
}
