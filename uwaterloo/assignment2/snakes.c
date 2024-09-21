#include <stdio.h>

int main(){
    int n = 0;
    //printf("Enter the value of n: ");
    scanf("%d", &n);
    
    if(n < 5){
        printf("Sorry. Exiting the program.");
        return 1;
    }
    int head = 3 ;// since the program says so, will try changing to 4
    int length = 2 ;//the program req mentions this
    int lastbaiteaten = 0;
    
    while(head < n){
        for ( int i = 0; i < n; i++){
            if (i == head){
                printf(" H ");
            }
            else if(i >= head - length  && i <= head){
                printf(" X ");
            }
            else if ( i % 2 == 1 && i >= head - length + 1 && i >= lastbaiteaten + 1){
                printf(" . ");
            }
            else{
                printf(" _ ");
            }
            
        }
        printf("\n");
        if ( head % 2 == 1 && head > lastbaiteaten + 1 && head > 3){
            length++;
            lastbaiteaten == head;
        }
        head++;
    }
}
