#include <stdio.h>

int main(){
    int i = 0;
    printf("enter the number of rows: ");
    scanf("%d", &i);
    
    for(int k = 0; k<=i; k++){
    for(int j = 0; j<=k; j++){
        printf("*");
       
    }
         printf("\n");
    }
}
