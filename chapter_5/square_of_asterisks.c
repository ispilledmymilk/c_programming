#include <stdio.h>

int square(int side){
    for(int i = 0; i<side; ++i){
        for(int j = 0; j<side; ++j){
            printf(" * ");
        }
        printf("\n");
    }
}

int main(){
    int x = 0;
    printf("Enter the length of the side of the square: ");
    scanf("%d", &x);
    
    printf("That is the square of the inputted side.", square(x));
}
