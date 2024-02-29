#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coin_toss(){
    return 1+ rand()%2;
    
}

int main(){
    srand(time(NULL));
    int head = 0, tail = 0;
    for(int i = 1; i<=100; ++i){
        int x = coin_toss();
    
        if(x == 1){
            head++;
        }
        else{
            tail++;
        }
    }
    printf("The number of heads are %d and tails are %d", head, tail);
}
