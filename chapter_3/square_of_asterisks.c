#include <stdio.h>

int main(){
    int side = 0;
    printf("enter the side length: ");
    scanf("%d", &side);
    for(int j = 0; j<side; j++){
    for(int i = 0; i <side; i++){
        printf("* ");
    }
        printf("\n");
    }
}
