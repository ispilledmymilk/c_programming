#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {CONTINUE, WON, LOST};

int rolldice(){
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;
    
    printf("%d + %d = % d\n", die1, die2, die1+die2);
    return die1 + die2;
}

int main(){
    srand(time(NULL));
    
    int point = 0;
    enum Status gamestat = CONTINUE;
    int sum = rolldice();
    
    switch (sum){
        case 7:
        case 11:
        gamestat = WON;
        break;
        
        case 2:
        case 3:
        case 12:
        gamestat = LOST;
        break;
        
        default:
        gamestat = CONTINUE;
        point = sum;
        printf("the point is %d\n", point);
        break;
    }
    
    while (CONTINUE == gamestat){
        sum = rolldice();
        
        if(sum == point){
            gamestat = WON;
        }
        else if(7 == sum){
            gamestat = LOST;
        }
        
        if(WON == gamestat){
            printf("Player won!\n");
        }
        else{
            printf("Player lost!\n");
        }
    }
    
    
}
