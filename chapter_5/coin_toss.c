#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate(){
    int x = 0;
    for(int i = 1; i<=100; ++i){
    x = 1 + rand() % 2;
    printf("%d\n", x);
    }

    int head= 0, tail = 0;
    
    if(x == 1){
        head++;
    }
    else if(x == 2){
        tail++;
    }
    
    //printf("%d %d", head, tail);
    
}

int main(){
    srand(time(NULL));
   
    printf("%d", generate());
    
}
