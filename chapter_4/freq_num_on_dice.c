#include <stdio.h>
#include <stdlib.h>

int main(){
    int f1 = 0;
    int f2 = 0;
    int f3 = 0;
    int f4= 0;
    int f5= 0;
    int f6= 0;
    
    for (int i =1; i<=600; ++i){
        int face = 1+ rand()%6;
        
        switch(face){
            case 1:
            ++f1;
            break;
            
            case 2:
            ++f2;
            break;

            case 3:
            ++f3;
            break;

            case 4:
            ++f4;
            break;

            case 5:
            ++f5;
            break;

            case 6:
            ++f6;
            break;

        }
        
        
    }
    printf("%d %d %d %d", f1, f2, f3, f4);
}

