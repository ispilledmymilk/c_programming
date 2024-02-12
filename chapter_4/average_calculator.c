#include <stdio.h>

int main(){
    int input = 0;
    int sum = 0;
    int count = 1;
    printf("enter the input: (9999 to end) ");
    scanf("%d",&input);
    
    while(input!=9999){
        sum +=input;
        
         printf("enter the input: (9999 to end) ");
    scanf("%d",&input);
    count++;
    }
    int real_count = count-1;
    int avg =(float) sum/(real_count);
    printf("%d",avg);
}
