#include <stdio.h>

int main(){
    int num = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    int largest = 0;
    int i = 1;
    int j = 1;
    int slargest = 0;
    
    while(i<=10){
        if(num>largest){
            largest = num;
        }
        printf("Enter the number: ");
        scanf("%d", &num);
        i++;
        
        if(num<largest && num > slargest){
            slargest = num;
        }
    }
    
    printf("largest is %d %d", largest, slargest);
    
}
    
