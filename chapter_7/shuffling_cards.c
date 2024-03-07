#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

void shuffle(int deck[][FACES]){
    for(size_t card = 1; card <= CARDS; ++card){
        size_t row = 0;
        size_t col = 0;
        
        do{
            row = rand() % SUITS;
            col = rand() % FACES;
        } while(deck[row][col] != 0);
        
        deck[row][col] = card;
    }
}
void deal(int deck[][FACES], const char *face[], const char *suit[]){
    
    for(size_t card = 1; card <= CARDS; ++card){
        for(size_t row = 0; row < SUITS; ++row){
            for(size_t column = 0; column < FACES; ++column){
                if(deck[row][column] == card){
                    printf("%5s of %-8s  %c\n", face[column], suit[row], card % 4 == 0 ? : '\0');
                }
            }
        }
    }
}

int main(){
    int deck[SUITS][FACES] = {0};
    srand(time(NULL));
    shuffle(deck);
    
    const char *suit[SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    
    const char *face[FACES] = {"Ace", "Deuce", "Three", "Four", "Five" , "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    
    deal(deck, face, suit);
    
    
    return 0;
}
