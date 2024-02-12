#include <stdio.h>

int main(){
    int counter = 1;
    int number = 0;
    int largest = 0;
    
    while(counter<=10 && number>=0){
        printf("enter the number: ");
        scanf("%d",&number);
        
        if(number>largest){
            largest = number;
        }
        counter++;
    }
    printf("largest is %d", largest);
}
