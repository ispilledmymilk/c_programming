#include <stdio.h>

int square(int number);

int main(){
    printf("The number\tThe square\n");
    
    for(int x = 0; x < 11; x++){
        printf("\t%d\t\t\t%d\n", x, square(x));
    }
}

int square(int number){
    int sq = number*number;
    return sq;
}
