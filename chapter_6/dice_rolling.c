#include <stdio.h>
#include <time.h>

int main(){
    srand(time(NULL));
    
    int array[13] = {0};
    for(int i = 0; i < 36000; ++i){
        int x = 1 + rand() % 6;
        int y = 1 + rand() % 6;
        int z = x + y;
        for(size_t j = 0; j < 13; ++j){
            if(j == z){
                ++array[j];
            }
        }
    }
    
    for(size_t i = 2; i < 13; ++i){
        printf("%d\t%d\n", i, array[i]);
    }
   
}
