#include <stdio.h>

int main(){
    int i = 0;
    printf("enter the number of rows: ");
    scanf("%d", &i);
    for(int k = i; k >=0; --k){
    for(int j = k; j >=0; --j){
        printf("*");
    }
    printf("\n");
    }
}
