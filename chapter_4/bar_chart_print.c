#include <stdio.h>

int main(){
    int i = 0;
    printf("Enter the number between 1 and 30(0 to end): ");
    scanf("%d", &i);
    
    while(i != 0){
        for(int j = 0; j<i; ++j){
            printf("*");
        }
        printf("\n");
        printf("Enter the number between 1 and 30(0 to end): ");
    scanf("%d", &i);
    }
    
}
