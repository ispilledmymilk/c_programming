#include <stdio.h>

int main(){
    int n = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for (int i = n; i > 0; --i){
        for(int j = 0; j < i; ++j){
            printf("*");
        }
        printf("\n");
    }
}
